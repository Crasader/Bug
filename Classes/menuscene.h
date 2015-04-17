#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "GameMarcos.h"
#include "basestudio.h"


NS_PAT_BEGIN
USING_NS_CC;
class MenuScene : public BaseStudio
{
public:
    MenuScene();
    CREATE_SCENE(MenuScene);
protected:
    void loadScene();
};


NS_PAT_END
#endif // MENUSCENE_H
