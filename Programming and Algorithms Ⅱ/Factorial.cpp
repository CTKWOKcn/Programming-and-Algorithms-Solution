#include <iostream>
#include <string>
#include "multiplication.cpp"
#include "subtraction.cpp"
using namespace std;
string Factorial(string n) 
{
	string s0(1, '1');
	if (n == s0)
		return s0;
	else
	{
		return multiplication(Factorial(subtraction(n, s0)), n);
	}
}