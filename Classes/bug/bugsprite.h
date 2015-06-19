#ifndef BUGSPRITE_H
#define BUGSPRITE_H

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "bugmodel.h"

USING_NS_CC;
using namespace cocostudio::timeline;

class BugSprite : public Node
{
public:
    BugSprite(BugModel* model);
    static BugSprite* create(BugModel *model);
    bool init();
    void onEnter();

    bool onTouchBegan(Touch* touch, Event* event);
    bool containsTouchLocation(Touch* touch);

    void bugRun();
    void moveToPoint(Point point);
    void rotationToPoint(Point point);
private:
    BugModel *model;
    Node* _root;
    ActionTimeline* action;
//    Sprite* _sprite;
};

#endif // BUGSPRITE_H
