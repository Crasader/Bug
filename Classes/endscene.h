#ifndef ENDSCENE_H
#define ENDSCENE_H

#include "GameMarcos.h"
#include "basestudio.h"
NS_PAT_BEGIN

class EndScene : public BaseStudio
{
public:
    EndScene();
    CREATE_SCENE(EndScene);
protected:
    void loadScene();
};

NS_PAT_END

#endif // ENDSCENE_H
