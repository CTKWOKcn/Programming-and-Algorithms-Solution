//#include<string>
//#include<algorithm>
////0作为乘数的情况未考虑
//using namespace std;
//string multiplication(string factors1,string factors2) 
//{
//	string product;
//	reverse(factors1.begin(), factors1.end());
//	reverse(factors2.begin(), factors2.end());
//
//	int a[1000] = { 0 };
//	for (int i = 0; i < factors1.length(); ++i) {
//		for (int j = 0; j < factors2.length(); ++j) {
//			a[i + j] += (factors1[i] - '0') * (factors2[j] - '0');
//		}
//	}
//
//	for (int i = 0; i < 1000 - 1; ++i) {
//		a[i + 1] += a[i] / 10;
//		a[i] = a[i] % 10;
//	}
//
//	int i = 1000 - 1;
//	while (a[i] == 0)
//		i--;
//	for (int j = i; j >= 0; --j)
//		product[j] = a[j];
//
//	return product;
//}