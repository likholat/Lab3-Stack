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
	TStack (int _MaxSize = 100);      //�����������
	~TStack (){ delete []Mas; }       //����������
	TStack (const TStack &ts);        //����������� �����������

	TStack & operator = (const TStack &ts){       //�������� ������������
		
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

	bool IsEmpty(){                               //�������� �� �������
		
		if (Size == 0)
			return true;
		return false;
	}

	bool IsFull(){                               //�������� �� �������������
	
		if (Size == MaxSize)
			return true;
		return false;
	}

	void Push (T a){                             //�������� �������
	
		if(IsFull())
			throw "ERROR";
		Mas[Size] = a;
		Size++;
	}

	T Top() const{                               //������ ��������� �������

		if(IsEmpty())
			throw "EMPTY";
		return Mas[Size-1];
	}

	T Pop(){                                    //�������� ��������� �������

		if(IsEmpty())
			throw "EMPTY";
		Size--;
		return Mas[Size];
	}
};

