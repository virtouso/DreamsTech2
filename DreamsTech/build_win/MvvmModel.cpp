#include "MvvmModel.h"


template <typename T>
void MvvmModel<T>::BindEvent(void (*action)(T ))
{
	Actions.emplace_back(action());
}


template <typename T>
void MvvmModel<T>::UnBindEvent(void (*action)(T input))
{
	Actions.erase(action());
}


template <typename T>
void MvvmModel<T>::UpdateValue(const T* value)
{
	Data = value;
}
