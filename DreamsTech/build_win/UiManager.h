#pragma once
#include "HelloWorldScene.h"
#include "UiManagerBase.h"

 class  UiManager: public UiManagerBase
{
 public:
	void Init(HelloWorld* helloWorld) override;
};

