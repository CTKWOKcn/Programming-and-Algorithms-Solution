//#include<iostream>
//#include<cstring>
//using namespace std;
//char Left[3][7];
//char Right[3][7];
//char result[3][7];
//bool IsFake(char c, bool light) {//有两种假币，一种较正常的硬币轻，一种较正常的硬币重；交给IsFake中的bool判断
//	for (int i = 0; i < 3; i++)
//	{
//		char* pLeft, * pRight;//定义两指针，一指向天平左边，一指向天平右边
//		if (light) {
//			pLeft = Left[i];
//			pRight = Right[i];
//		}
//		else//否则就是重的
//		{
//			pLeft = Right[i];
//			pRight = Left[i];
//		}
//		switch (result[i][0])
//		{
//		case'u':
//			if (strchr(pRight, c) == NULL)//strchr函数功能为在一个串中查找给定字符的第一个匹配之处。函数原型为：char *strchr(const char *str, int c)，即在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。
//			{
//				return false;
//			}
//			break;
//		case'e':
//			if (strchr(pRight, c||strchr(pRight,c)) == NULL)
//			{
//				return false;
//			}
//			break;
//		case'd':
//			if (strchr(pLeft, c) == NULL)
//			{
//				return false;
//			}
//			break;
//		}
//	}
//	return true;
//}
//
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--)//等价于for(;t<0;t--)
//	{
//		for (int i = 0; i < 3; i++)//input arrays
//			cin >> Left[i] >> Right[i] >> result[i];
//		for (char c = 'A'; c <= 'L'; c++)//遍历A-L
//		{
//			if (IsFake(c,true))//默认轻
//			{
//				cout << c << "is the counterfeit coin and it is light.\n";
//				break;
//			}
//			else if (IsFake(c,false))//否则重
//			{
//				cout << c << "is the counterfeit coin and it is heavy.\n";
//				break;
//			}
//		}
//	}
//	return 0;
//}