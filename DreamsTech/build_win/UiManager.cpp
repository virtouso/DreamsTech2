#include "UiManager.h"

#include "HelloWorldScene.h"
#include "2d/CCLabel.h"







UiManager::UiManager() :UiManagerBase()
{

}




void UiManager::Init(HelloWorld* helloWorld)
{

	auto label = cocos2d::Label::createWithSystemFont("Hello World", "Arial", 96);
	label->setAnchorPoint(cocos2d::Vec2(0.0, 0.0));
	helloWorld->addChild(label, 1);



}
