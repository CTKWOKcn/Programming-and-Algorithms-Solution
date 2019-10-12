#include<iostream>
#include<string>
#include<algorithm>
//0作为乘数的情况未考虑
using namespace std;
string multiplication(string s1,string s2) 
{
	string difficence;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int a[11000] = { 0 };
	for (int i = 0; i < s1.length(); ++i) {
		for (int j = 0; j < s2.length(); ++j) {
			a[i + j] += (s1[i] - '0') * (s2[j] - '0');
		}
	}

	for (int i = 0; i < 11000 - 1; ++i) {
		a[i + 1] += a[i] / 10;
		a[i] = a[i] % 10;
	}

	int i = 11000 - 1;
	while (a[i] == 0)
		i--;
	for (int j = i; j >= 0; --j)
		difficence[j] = a[j];

	return difficence;
}