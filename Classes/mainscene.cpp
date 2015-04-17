#include "mainscene.h"
#include "cocostudio/CocoStudio.h"
#include "endscene.h"

NS_PAT_BEGIN
using namespace cocostudio;

MainScene::MainScene()
{
}

void MainScene::initialize(){
}

void MainScene::loadScene(){
    _rootNode = CSLoader::createNode("main.csb");

    auto cake = dynamic_cast<Sprite*>(_rootNode->getChildByName("cake"));
    auto container  = dynamic_cast<Node*>(_rootNode->getChildByName("container"));

    auto* listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true); //Swallow ==>tunshi
    listener->onTouchBegan = CC_CALLBACK_2(MainScene::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(MainScene::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(MainScene::onTouchEnded, this);
    container->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, _rootNode);
}

void MainScene::gameEnd(){
    Director::getInstance()->replaceScene(TransitionCrossFade::create(.2f, EndScene::createScene()));
}

bool MainScene::onTouchBegan(Touch *touch, Event *event){
//    Point p = _rootNode->convertToWorldSpace(_rootNode->convertTouchToNodeSpace(touch));
    return true;
}
void MainScene::onTouchMoved(Touch *touch, Event *event){

}
void MainScene::onTouchEnded(Touch *touch, Event *event){

}

NS_PAT_END
