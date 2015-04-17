#ifndef BUGBASE_H
#define BUGBASE_H

#include "cocos2d.h"

USING_NS_CC;

class BugBase : public Sprite
{
public:
    BugBase();
    bool init();
    CREATE_FUNC(BugBase);


protected:
    int HP;
    int speed;

private:
};

#endif // BUGBASE_H
