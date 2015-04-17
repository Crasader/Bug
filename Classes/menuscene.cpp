#include "menuscene.h"
#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "mainscene.h"
#include "maincontroller.h"

NS_PAT_BEGIN
USING_NS_CC;
using namespace ui;
using namespace cocostudio;

MenuScene::MenuScene()
{
}

void MenuScene::loadScene(){
    _rootNode = CSLoader::createNode("menu.csb");
    auto start = dynamic_cast<Button*>(_rootNode->getChildByName("start"));

    start->addClickEventListener([](Ref*) {
//        Director::getInstance()->replaceScene(TransitionCrossFade::create( .2f, MainScene::createScene()));
        Director::getInstance()->replaceScene(TransitionCrossFade::create( .0f, MainController::create()));
    });
}




NS_PAT_END
