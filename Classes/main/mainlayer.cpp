#include "mainlayer.h"
#include "cocostudio/CocoStudio.h"
#include "bugsprite.h"

using namespace cocostudio;

MainLayer::MainLayer()
    :delegate(nullptr)
{
}

bool MainLayer::init(){
    this->_root = CSLoader::createNode("main.csb");
    return true;
}
void MainLayer::initMvc(ILayerDelegate* delegate){
    this->delegate = delegate;
}

void MainLayer::onEnter(){
    Layer::onEnter();

    CCASSERT(this->_root, "the root node was nullptr");
    this->addChild(_root);
    auto cake = dynamic_cast<Sprite*>(this->_root->getChildByName("cake"));
    auto container  = dynamic_cast<Node*>(this->_root->getChildByName("container"));

    this->setTouchEnabled(true);
    this->setTouchMode(Touch::DispatchMode::ONE_BY_ONE);
    this->setContentSize(Director::getInstance()->getVisibleSize());

    bug = BugSprite::create();
    this->addChild(bug);
}


bool MainLayer::onTouchBegan(Touch* touches, Event *unused_event){
    this->delegate->onToucheBegan();
    bug->bugRun();
    return true;
}
void MainLayer::onTouchMoved(Touch *touches, Event *unused_event){

}
void MainLayer::onTouchEnded(Touch *touches, Event *unused_event){

}
