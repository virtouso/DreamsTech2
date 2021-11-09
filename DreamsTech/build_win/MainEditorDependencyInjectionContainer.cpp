#include "MainEditorDependencyInjectionContainer.h"


#include "UiManagerBase.h"
#include "UiManager.h"



#include "di.hpp"
namespace di = boost::di;



 void MainEditorDependencyInjectionContainer::Init()
{

	 const auto injector = di::make_injector(
		 di::bind<UiManagerBase>.to<UiManager>()
	 );




}

