#ifndef BUGSPRITE_H
#define BUGSPRITE_H

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio::timeline;

class BugSprite : public Node
{
public:
    BugSprite();
    CREATE_FUNC(BugSprite);
    bool init();
    void onEnter();

    void bugRun();

private:
//    Node* _root;
    ActionTimeline* action;
//    Sprite* _sprite;
    ;
};

#endif // BUGSPRITE_H
