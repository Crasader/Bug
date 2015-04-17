#include "endscene.h"
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"

NS_PAT_BEGIN
EndScene::EndScene()
{
}

void EndScene::loadScene(){
    _rootNode = CSLoader::createNode("end.csb");
}

NS_PAT_END
