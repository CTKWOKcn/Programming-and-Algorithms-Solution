//#include <string>
//using namespace std;
//string addition(string addend,string augend)
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