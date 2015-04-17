#ifndef LOADINGSCENE_H
#define LOADINGSCENE_H

#include "cocos2d.h"
#include "basestudio.h"
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace ui;
using namespace cocostudio;


namespace patgame{

class LoadingScene : public BaseStudio
{
public:
    LoadingScene();
    CREATE_SCENE(LoadingScene);
protected:
    void loadScene();
};

}
#endif // LOADINGSCENE_H

