#include <iostream>
#include <string>
using namespace std;
string subtraction(string s1, string s2)
{
	string error = "error";
	string s4, difference;//定义字符串s1，s2
	if (s1.size() < s2.size())
		return error;
	int len = s1.size() - s2.size();
	string s3(len, '0');
	s2 = s3 + s2;//把0补全，对齐
	int a = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		int b = (s1[i] - '0') - (s2[i] - '0') - a;
		if (b < 0)
		{
			difference.push_back((b + 10) + '0'); //数字转化为字符，存入新字符串。
			a = 1;
		}
		else {
			difference.push_back(b + '0'); //将最后一位进为插入新字符串。
			a = 0;
		}
	}
	string::reverse_iterator i = difference.rbegin();
	for (; i != difference.rend() - 1; ++i)//找到前导0的迭代器。
		if (*i != '0') break;//i在跳出位置
	for (; i != difference.rend(); ++i)//新字符串逆序输出。
	{
		s4 = s4 + *i;
	}
	return s4;
}