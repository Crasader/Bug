#include "bugscontroller.h"
#include "bugmodel.h"

BugsController::BugsController()
{
}

BugsController::~BugsController(){

}

bool BugsController::init(){
//    this->schedule(CC_CALLBACK_1(BugsController::upSchedule, this), 4.0f, kRepeatForever, 0, "crateBug");
    return true;
}

void BugsController::upSchedule(float time){
    this->createBug();
}

void BugsController::onEnter(){
    Node::onEnter();
    this->createBug();
    this->createBug();

//    EventListener* listener = EventListenerCustom::create("bug-die", [](EventCustom* event){
//        CCLOG("kkk;;;;;");
//    });
    EventListener* listener = EventListenerCustom::create("bug-die", CC_CALLBACK_1(BugsController::onBugDie, this));
    this->_eventDispatcher->addEventListenerWithFixedPriority(listener, 1);
}
void BugsController::onExit(){

}


Point BugsController::makeRandomPoint(){
    Size size = CCDirector::getInstance()->getVisibleSize();
    float x = CCRANDOM_0_1()*size.width;
    float y = CCRANDOM_0_1()*size.height;
    Point p = ccp(x, y);
    Rect rect = Rect(size.width/2 - 150, size.height/2 - 100, 250, 180);
    if(rect.containsPoint(p))
        p = this->makeRandomPoint();
    return p;
}

void BugsController::createBug(){
    Size size = CCDirector::getInstance()->getWinSize();
    BugProperties properties;
    properties.hp = 4;
    properties.speed = 40;
    ObjBug objBug;
    objBug.model = BugModel::create(properties);
    objBug.bug = BugSprite::create(objBug.model);
    Point p = this->makeRandomPoint();
    objBug.bug->setPosition(p);
    objBug.bug->rotationToPoint(ccp(size.width/2, size.height/2));
//    bug->moveToPoint(ccp(size.width/2, size.height/2));
    this->addChild(objBug.bug);
//    bugList.
    bugList.push_back(&objBug);

    CCLOG("bugs controller create bug");
}

void BugsController::removeBug(BugSprite* bug){
    this->removeChild(bug);
    bug->cleanup();
}

void BugsController::logicHandler(){

}

void BugsController::onBugDie(EventCustom *event){
    CCLOG("kkkk,,,,,kkkkjjj");
}
