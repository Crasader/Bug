#ifndef MAINMODEL_H
#define MAINMODEL_H

#include "cocos2d.h"

USING_NS_CC;

class MainModel : public Ref
{
public:
    MainModel();
    CREATE_FUNC(MainModel);
    bool init();

};

#endif // MAINMODEL_H
