#pragma once

#include "cocos2d.h"




class HelloWorld : public cocos2d::Layer
{

private:


public:
    static cocos2d::Scene* createScene();
    virtual bool init();  
    
    CREATE_FUNC(HelloWorld);
};
