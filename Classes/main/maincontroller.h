#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "cocos2d.h"
#include "ilayerdelegate.h"
USING_NS_CC;
class MainController :public Scene, public ILayerDelegate
{
public:
    MainController();
    ~MainController();
    CREATE_FUNC(MainController);
    bool init();

    void onEnter();

    void onToucheBegan();
    void onToucheMoved();
};

#endif // MAINCONTROLLER_H
