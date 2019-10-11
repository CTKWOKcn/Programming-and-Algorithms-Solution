//#include<iostream>
//#include <string>
//using namespace std;
//char a[201], b[201], c[201];
//char d[] = { "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001" };
//string factorial(string n) {
//	int m = 0;
//	for (int i = 201 - n.length(); i < 201; i++)
//	{
//		a[i] = n[m];
//		m++;
//	}
//	if (strcmp(d, a)==0)
//	{
//		return d;
//	}
//	else
//		return multiplication(n, factorial(n - 1) );
//}
//string subtraction(string s1) {
//	s1[s1.length() - 1] = s1[s1.length() - 1] - 1;
//}
//string addition(string s1,string s2) {
//	string s3;
//	int m = 0;
//	for (int i = 201 - s1.length(); i < 201; i++)//s1.length 获取s1的长度，循环（201-字符串长）次，即从数组后面开始赋值
//	{
//		a[i] = s1[m];
//		m++;
//	}
//	m = 0;
//	for (int i = 201 - s2.length(); i < 201; i++)//同样从后面开始赋值给b数组
//	{
//		b[i] = s2[m];
//		m++;
//	}
//	for (int i = 200; i >= 0; i--)//从200开始计算，因为201是空位，从200到0的循环
//	{
//		c[i] += (a[i] - '0' + b[i] - '0');//计算出a[i]单元与字符0的地址差，其大小即为a的数字大小，对b同理，相加得到a+b的值
//		if (c[i] > '9')//进位计算，此时c的大小可能是；‘等字符值的大小
//		{
//			c[i] = c[i] - ':' + '0';//冒号：对应的ASCII是10，分号；是11.
//			c[i - 1] = '1';//进一
//		}
//	}
//	m = 0;//准备输出
//	while (c[m] == '0' && m < 200)//前导0  ， 此处三行相当于 for(int m=0;c[m]==0;m++){- -似乎还是有点区别的}
//		m++;//此处三行 作用是 用于计算前导0的个数。m<200的作用是防止数组越界
//	if (m >= 200)
//		cout << '0';//？？？？
//	else
//	{
//		for (int i = m; i < 201; i++)//输出结果
//		{
//			int x = 0;
//			s3[x] << c[i];
//			x++;
//		}
//	}
//	return s3;
//}
//string multiplication(string s1, string s2) {
//	int n = std::stoi(s2);
//	for (int i = 0; i < n; i++)
//	{
//		addition(s1, s1);
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	return 0;
//}
