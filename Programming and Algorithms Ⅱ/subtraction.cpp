//#include <string>
//using namespace std;
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