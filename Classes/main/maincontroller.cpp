#include "maincontroller.h"
#include "mainlayer.h"

MainController::MainController()
{
}
MainController::~MainController(){

}

bool MainController::init(){
    MainLayer* layer = MainLayer::create();
    layer->initMvc(this);
    this->addChild(layer);

    return true;
}

void MainController::onEnter(){
    Scene::onEnter();
}

void MainController::onToucheBegan(){

}
void MainController::onToucheMoved(){

}
