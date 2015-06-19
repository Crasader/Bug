#ifndef BUGMODEL_H
#define BUGMODEL_H

#include "cocos2d.h"

USING_NS_CC;



typedef struct Properties{
    int hp;
    float speed;

}BugProperties;




class BugModel : public Node
{
public:
    BugModel(BugProperties properties);
    ~BugModel();

    static BugModel* create(BugProperties properties);

    bool init();
    float getSpeed();

    void onMoveEnd(Ref* sender);
    void onClick();

private:
    BugProperties properties;

};

#endif // BUGMODEL_H
