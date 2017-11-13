#include "stdafx.h"
#include <string.h>
#include <iostream>
#include "Calculator.h"


using namespace std;

void TCalculator:: ToPostfix(){

	postfix = " ";
	stc.Clear();
	string tmp = "(";
	tmp += infix;
	tmp += ")";
	for (int i = 0; i < tmp.size(); i++){
		if (tmp[i] >= '0' && tmp[i] <= '9' || tmp[i] == '.')
			postfix += tmp[i];
		else if (tmp[i] == '(')
			stc.Push('(');
		else if (tmp[i] == ')'){
			while (stc.Top() != '(')
				postfix += stc.Pop();
			stc.Pop();
		}
		else if (tmp[i] == '+' || tmp[i] == '-' || tmp[i] == '*' || tmp[i] == '/' || tmp[i] == '^')
	}