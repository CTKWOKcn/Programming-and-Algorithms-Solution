#include<iostream>
using namespace std;
double exp(char* c) {
	switch (c[0])
	{
	case '+':return exp() + exp();
	default:
		break;
	}
}
int main() {
	char s;
	cin >> s;

}