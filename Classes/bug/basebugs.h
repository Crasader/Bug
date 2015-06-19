#ifndef BASEBUGS_H
#define BASEBUGS_H

#include "cocos2d.h"

USING_NS_CC;

class BaseBugs : public Layer
{
public:
    BaseBugs();
    ~BaseBugs();
    CREATE_FUNC(BaseBugs);
    bool init();

    void onEnter();
    void onExit();

    virtual void play();
};

#endif // BASEBUGS_H
