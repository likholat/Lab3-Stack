#pragma once

#include <iostream>

using namespace std;

template <class T>


class TStack {
protected:
	int Size;
	int MaxSize;
	T *Mas;

public:
	TStack (int _MaxSize = 100);      //конструктор
	~TStack (){ delete []Mas; }       //деструктор
	TStack (const TStack &ts);        //конструктор копирования

	TStack & operator = (const TStack &ts){       //оператор присваивания
		
		if (MaxSize != ts.MaxSize){
			delete []Mas;
			MaxSize = ts.MaxSize;
			Mas = new T[MaxSize];
		}
		Size = ts.Size;
		for (i = 0; i < Size; i++)
			Mas[i] = ts.Mas[i];
		return *this;
	}

	bool IsEmpty(){                               //проверка на пустоту
		
		if (Size == 0)
			return true;
		return false;
	}

	bool IsFull(){                               //проверка на заполненность
	
		if (Size == MaxSize)
			return true;
		return false;
	}

	void Push (T a){                             //положить элемент
	
		if(IsFull())
			throw "ERROR";
		Mas[Size] = a;
		Size++;
	}

	T Top() const{                               //узнать последний элемент

		if(IsEmpty())
			throw "EMPTY";
		return Mas[Size-1];
	}

	T Pop(){                                    //вытащить последний элемент

		if(IsEmpty())
			throw "EMPTY";
		Size--;
		return Mas[Size];
	}
};

