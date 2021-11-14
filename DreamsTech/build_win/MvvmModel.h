#pragma once 



#include <iostream>
#include <vector>



template<typename  T>
class MvvmModel
{

private:
		T  Data;


public:
	
	void UpdateValue(const   T* value);
	std::vector<void(*)(int input)> Action;


};