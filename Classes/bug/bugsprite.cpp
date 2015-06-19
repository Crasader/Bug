#include "bugsprite.h"



using namespace cocostudio;
BugSprite::BugSprite(BugModel *model)
    :action(nullptr)
    ,model(model)
    ,_root(nullptr)
{
}

BugSprite* BugSprite::create(BugModel *model){
    BugSprite *sprite = new BugSprite(model);
    if(sprite && sprite->init()){
        sprite->autorelease();
        return sprite;
    }else{
        delete sprite;
        sprite = NULL;
        return NULL;
    }
}

bool BugSprite::init(){
    return true;
}
void BugSprite::onEnter(){
    Node::onEnter();
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("bug0.plist", "bug0.png");

    _root = CSLoader::createNode("bugnode.csb");
    this->addChild(_root);
    _root->setPosition(0, 0);
    this->action = CSLoader::createTimeline("bug0.csb");
    _root->runAction(action);
    this->action->setTimeSpeed(.5f);
    this->action->play("walk", true);
//    action->gotoFrameAndPlay(0,15,true);

    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);

    listener->onTouchBegan = CC_CALLBACK_2(BugSprite::onTouchBegan, this);

    this->_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

}

bool BugSprite::onTouchBegan(Touch *touch, Event *event){
    CCLOG("the but is click");
    if(this->containsTouchLocation(touch)){
        this->model->onClick();
        return true;
    }
    return false;
}
bool BugSprite::containsTouchLocation(Touch *touch){
    CC_ASSERT(_root);
    Sprite* sprite = (Sprite*)(_root->getChildByName("ProjectNode_1")->getChildByName("Sprite_1"));
    Size size = sprite->getContentSize();
    Point point = convertTouchToNodeSpaceAR(touch);
    Rect rect = CCRectMake(-size.width/2, -size.height/2, size.width, size.height);
    return rect.containsPoint(point);
}

void BugSprite::bugRun(){
//    _sprite->getDisplayFrame()->
}

void BugSprite::moveToPoint(Point point){
    float distance = ccpDistance(this->getPosition(), point);
    ActionInterval *action = MoveTo::create(distance/model->getSpeed(), point);
//    FiniteTimeAction* finiteAction = Sequence::create(action, CallFuncN::create([&](Node* sender){
//                                                          CCLOG("the bug on move end1");
//                                                      }), NULL);
    auto finiteAction = Sequence::create(action, CallFuncN::create(CC_CALLBACK_1(BugModel::onMoveEnd, this->model)), NULL);
    this->runAction(finiteAction);
//    finiteAction->setTag(1);
}



void BugSprite::rotationToPoint(Point point){
    float ratian = atan2f(point.x - this->getPositionX(), point.y - this->getPositionY());
    this->setRotation(ratian*180/M_PI);
}
