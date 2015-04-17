#include "loadingscene.h"
#include "GameMarcos.h"

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "menuscene.h"

USING_NS_CC;
using namespace ui;
using namespace cocostudio;
namespace patgame{

LoadingScene::LoadingScene(){
//    BaseStudio::BaseStudio();
}

void LoadingScene::loadScene(){
    const std::string fileName = "laoding.csb";
    _rootNode = CSLoader::createNode(fileName);

    auto skip = dynamic_cast<Button*>(_rootNode->getChildByName("skip"));

    struct callBackFun{
        void operator() (Ref* sender) const{
            Scene* menuScene = MenuScene::createScene();
            Director::getInstance()->replaceScene(menuScene);
        }
    };

    Widget::ccWidgetClickCallback callback = callBackFun();
    skip->addClickEventListener(callback);

}

}
