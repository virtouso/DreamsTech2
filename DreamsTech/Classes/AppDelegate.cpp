#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "../build_win/Int2.h"
#include "../build_win/GeneralSettings.h"




USING_NS_CC;




AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLViewImpl::create("Dreams Tech Engine");
        glview->setFrameSize(GeneralSettings::ScreenSize.X, GeneralSettings::ScreenSize.Y);
       
        director->setOpenGLView(glview);
    }

    auto scene = HelloWorld::createScene();
    director->runWithScene(scene);

    return true;
}

void AppDelegate::applicationDidEnterBackground() {
}

void AppDelegate::applicationWillEnterForeground() {
}