#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "GameMarcos.h"
#include "basestudio.h"


NS_PAT_BEGIN

class MainScene : public BaseStudio
{
public:
    MainScene();
    CREATE_SCENE(MainScene);

    bool onTouchBegan(Touch* touch, Event* event);
    void onTouchMoved(Touch* touch, Event* event);
    void onTouchEnded(Touch* touch, Event* event);

protected:
    void initialize();
    void loadScene();
    void gameEnd();

};


NS_PAT_END
#endif // MAINSCENE_H
