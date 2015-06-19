#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "loadingscene.h"
#include "GameMarcos.h"
#include "maincontroller.h"

USING_NS_CC;
using namespace patgame;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
   auto director = Director::getInstance();
     auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLViewImpl::create("Bug");
        director->setOpenGLView(glview);
    }

/*******


    glview->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, kResolutionNoBorder);

    Size framSize = glview->getFrameSize();


    director->setContentScaleFactor(hongMiResource.size.width/designResolutionSize.width);
*******************/
//    glview->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, kResolutionNoBorder);
//        CCSize framSize = pEGLView->getFrameSize();
//        CCString mm;
//        mm = CCFileUtils::sharedFileUtils()->getResourceDirectory();

//        CCLOG("curent URL: %s", mm);

//        pDirector->setContentScaleFactor(hongMiResource.size.width/designResolutionSize.width);


    /******************************/

    std::vector<std::string> dir;
    dir.push_back("res");
    FileUtils::sharedFileUtils()->setSearchResolutionsOrder(dir);

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
    auto scene =  LoadingScene::createScene();

//    auto scene = MainController::create();
//    Scene* scene = Scene::create();
//    Sprite* s = Sprite::create("CloseNormal.png");
//    s->setPosition(0, 0);
//    scene->addChild(s);

    // run
    director->runWithScene(scene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
