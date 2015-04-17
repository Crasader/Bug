#ifndef BASESTUDIO_H
#define BASESTUDIO_H

#include "cocos2d.h"

USING_NS_CC;

namespace patgame {

#define CREATE_SCENE(__STAGE_SUB__) \
static cocos2d::Scene* createScene() \
{ \
    auto scene = cocos2d::Scene::create(); \
    std::shared_ptr<__STAGE_SUB__> stage = std::make_shared<__STAGE_SUB__>(); \
    stage->loadScene(); \
    scene->addChild(stage->_rootNode); \
    return scene; \
}

class BaseStudio : public Ref
{
public:
    BaseStudio();
protected:
    virtual void loadScene() = 0;
    Node* _rootNode;
};

}
#endif // BASESTUDIO_H
