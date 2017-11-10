#include "stdafx.h"
#include "Stack.h"

template <class T> 
TStack<T>::TStack(int _MaxSize = 100){
	
	if(_MaxSize < 0)
			throw _MaxSize;
		MaxSize = _MaxSize;
		Size = 0;
		Mas = new T[MaxSize];
}

template <class T> 
TStack<T>::TStack(const TStack &ts){

	MaxSize = ts.MaxSize;
		Size = ts.Size;
		Mas = new T[MaxSize];
		for (i = 0; i < Size; i++)
			Mas[i] = ts.Mas[i];
	}