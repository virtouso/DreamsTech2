#pragma once 



#include <iostream>
#include <vector>



template<typename  T>
class MvvmModel
{

private:
	T  Data;
	std::vector<void(*)(T input)> Actions;


public:

	void UpdateValue(const   T* value);
	void BindEvent(void(*action)(T) );
	void UnBindEvent(void(*action)(T));



};