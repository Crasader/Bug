#ifndef BUGSCONTROLLER_H
#define BUGSCONTROLLER_H

#include "cocos2d.h"
#include "bugsprite.h"

USING_NS_CC;

typedef struct _objBug{
    BugSprite* bug;
    BugModel* model;
}ObjBug;

class BugsController : public Node
{
public:
    BugsController();
    ~BugsController();
    CREATE_FUNC(BugsController);

    bool init();
    void onEnter();
    void onExit();
    void upSchedule(float time);
    void onBugDie(EventCustom* event);
private:
    Point makeRandomPoint();
    void createBug();
    void removeBug(BugSprite* bug);
    void logicHandler();
    std::vector<ObjBug*> bugList;
};

#endif // BUGSCONTROLLER_H
