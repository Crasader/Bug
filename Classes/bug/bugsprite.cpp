#include "bugsprite.h"



using namespace cocostudio;
BugSprite::BugSprite()
    :action(nullptr)
{
}

bool BugSprite::init(){
    return true;
}
void BugSprite::onEnter(){
    Node::onEnter();
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("bug0.plist", "bug0.png");

    auto _root = CSLoader::createNode("bugnode.csb");
    this->addChild(_root);
    _root->setPosition(400, 400);
    this->action = CSLoader::createTimeline("bug0.csb");
    _root->runAction(action);
    this->action->setTimeSpeed(.5f);
    this->action->play("walk", true);
//    action->gotoFrameAndPlay(0,15,true);
}

void BugSprite::bugRun(){
//    _sprite->getDisplayFrame()->
}
