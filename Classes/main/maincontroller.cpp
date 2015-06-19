#include "maincontroller.h"
#include "mainlayer.h"
#include "bugscontroller.h"


MainController::MainController()
{
}
MainController::~MainController(){

}

bool MainController::init(){
    MainLayer* layer = MainLayer::create();
    layer->initMvc(this);
    this->addChild(layer);

    BugsController* controller = BugsController::create();
    this->addChild(controller);

    return true;
}

void MainController::onEnter(){
    Scene::onEnter();
}

void MainController::onToucheBegan(){

}
void MainController::onToucheMoved(){

}
