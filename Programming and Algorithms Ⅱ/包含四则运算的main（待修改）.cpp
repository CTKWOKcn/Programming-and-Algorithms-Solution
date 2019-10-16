//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string Factorial(string n);
//string multiplication(string factors1, string factors2);
//string subtraction(string Minuend, string Reduction);
//string addition(string addend, string augend);
//int main() {
//	string n;
//	cin >> n;
//	cout << Factorial(n);
//	return 0;
//}
//string Factorial(string n)
//{
//	string s0(1, '1');
//	if (n == s0)
//		return s0;
//	else
//	{
//		return multiplication(Factorial(subtraction(n, s0)), n);
//	}
//}
//string multiplication(string factors1, string factors2)
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
//string subtraction(string Minuend, string Reduction)
//{
//	string error = "error";
//	string Difference, difference;//定义字符串Minuend，Reduction
//	if (Minuend.size() < Reduction.size())
//		return error;
//	int len = Minuend.size() - Reduction.size();
//	string Temp(len, '0');
//	Reduction = Temp + Reduction;//把0补全，对齐
//	int a = 0;
//	for (int i = Minuend.size() - 1; i >= 0; i--)
//	{
//		int b = (Minuend[i] - '0') - (Reduction[i] - '0') - a;
//		if (b < 0)
//		{
//			difference.push_back((b + 10) + '0'); //数字转化为字符，存入新字符串。
//			a = 1;
//		}
//		else {
//			difference.push_back(b + '0'); //将最后一位进为插入新字符串。
//			a = 0;
//		}
//	}
//	string::reverse_iterator i = difference.rbegin();
//	for (; i != difference.rend() - 1; ++i)//找到前导0的迭代器。
//		if (*i != '0') break;//i在跳出位置
//	for (; i != difference.rend(); ++i)//新字符串逆序输出。
//	{
//		Difference = Difference + *i;
//	}
//	return Difference;
//}
//string addition(string addend, string augend)
//{
//	string Temp_sum, sum;//定义字符串addend，augend
//	//较短的字符串放在第二位。
//	if (addend.size() < augend.size())
//	{
//		string temp = addend;
//		addend = augend;
//		augend = temp;
//	}
//	int len = addend.size() - augend.size();
//	string s3(len, '0');
//	augend = s3 + augend;
//	int a = 0;
//	for (int i = addend.size() - 1; i >= 0; i--)
//	{
//		int b = (addend[i] - '0') + (augend[i] - '0') + a;
//		if (b > 9)
//		{
//			sum.push_back((b - 10) + '0'); //数字转化为字符，存入新字符串。
//			a = 1;
//		}
//		else {
//			sum.push_back(b + '0'); //将最后一位进为插入新字符串。
//			a = 0;
//		}
//	}
//	sum.push_back(a + '0');
//	string::reverse_iterator i = sum.rbegin();
//	for (; i != sum.rend() - 1; ++i)//找到前导0的迭代器。
//		if (*i != '0') break;//i在跳出位置
//	for (; i != sum.rend(); ++i)//新字符串逆序输出。
//	{
//		Temp_sum = Temp_sum + *i;
//	}
//	return Temp_sum;
//}