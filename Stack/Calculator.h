#include "stdafx.h"
#include <string.h>
#include <iostream>
#include "Stack.h"


using namespace std;

class TCalculator{
	string infix;
	string postfix;
	TStack<char> stc;

	int Priority (char ch){  //определение приоритета операции

		if (ch == '(')
			return 0;
		if (ch == '+' || ch == '-')
			return 1;
		if (ch == '*' || ch == '/')
			return 2;
		if (ch == '^')
			return 3;
	}
public:
	TCalculator() {
		infix = " ";
		postfix = " ";
	}

	void ToPostfix();   //перевод в постфиксную запись
};