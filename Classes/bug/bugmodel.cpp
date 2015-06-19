#include "bugmodel.h"


BugModel::BugModel(BugProperties properties)
{
    this->properties = properties;
}

BugModel::~BugModel(){

}

bool BugModel::init(){
    return true;
}

BugModel* BugModel::create(BugProperties properties){
    BugModel* bug = new BugModel(properties);
    if(bug && bug->init()){
        bug->autorelease();
        return bug;
    }else{
        delete bug;
        bug = NULL;
        return NULL;
    }
}

float BugModel::getSpeed(){
    return properties.speed;
}

void BugModel::onMoveEnd(Ref *sender){
    CCLOG("the bug on move end");
}

void BugModel::onClick(){
    this->properties.hp -= 1;
    if(this->properties.hp<=0){
        EventCustom event("bug-die");
        event.setUserData(&properties);
        this->_eventDispatcher->dispatchEvent(&event);
    }
}
