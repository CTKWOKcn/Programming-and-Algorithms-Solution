#include <iostream>
#include <string>
using namespace std;
string addition(string s1,string s2)
{
	string s4, sum;//定义字符串s1，s2
	//较短的字符串放在第二位。
	if (s1.size() < s2.size())
	{
		string temp = s1;
		s1 = s2;
		s2 = temp;
	}
	int len = s1.size() - s2.size();
	string s3(len, '0');
	s2 = s3 + s2;
	int a = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		int b = (s1[i] - '0') + (s2[i] - '0') + a;
		if (b > 9)
		{
			sum.push_back((b - 10) + '0'); //数字转化为字符，存入新字符串。
			a = 1;
		}
		else {
			sum.push_back(b + '0'); //将最后一位进为插入新字符串。
			a = 0;
		}
	}
	sum.push_back(a + '0');
	string::reverse_iterator i = sum.rbegin();
	for (; i != sum.rend() - 1; ++i)//找到前导0的迭代器。
		if (*i != '0') break;//i在跳出位置
	for (; i != sum.rend(); ++i)//新字符串逆序输出。
	{
		s4 = s4 + *i;
	}
	return s4;
}