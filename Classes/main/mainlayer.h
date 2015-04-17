#ifndef MAINLAYER_H
#define MAINLAYER_H

#include "cocos2d.h"
#include "ilayerdelegate.h"
#include "bugsprite.h"

USING_NS_CC;

class MainLayer : public Layer
{
public:
    MainLayer();
    CREATE_FUNC(MainLayer);
    bool init();
    void initMvc(ILayerDelegate* delegate);
    virtual void onEnter();


    bool onTouchBegan(Touch *touch, Event *unused_event);
    void onTouchMoved(Touch *touch, Event *unused_event);
    void onTouchEnded(Touch *touch, Event *unused_event);

private:
    Node* _root;
    ILayerDelegate* delegate;
    BugSprite* bug;
};

#endif // MAINLAYER_H
