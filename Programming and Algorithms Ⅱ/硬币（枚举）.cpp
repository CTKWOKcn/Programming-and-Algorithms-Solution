//#include<iostream>
//#include<cstring>
//using namespace std;
//char Left[3][7];
//char Right[3][7];
//char result[3][7];
//bool IsFake(char c, bool light) {//�����ּٱң�һ�ֽ�������Ӳ���ᣬһ�ֽ�������Ӳ���أ�����IsFake�е�bool�ж�
//	for (int i = 0; i < 3; i++)
//	{
//		char* pLeft, * pRight;//������ָ�룬һָ����ƽ��ߣ�һָ����ƽ�ұ�
//		if (light) {
//			pLeft = Left[i];
//			pRight = Right[i];
//		}
//		else//��������ص�
//		{
//			pLeft = Right[i];
//			pRight = Left[i];
//		}
//		switch (result[i][0])
//		{
//		case'u':
//			if (strchr(pRight, c) == NULL)//strchr��������Ϊ��һ�����в��Ҹ����ַ��ĵ�һ��ƥ��֮��������ԭ��Ϊ��char *strchr(const char *str, int c)�����ڲ��� str ��ָ����ַ�����������һ�γ����ַ� c��һ���޷����ַ�����λ�á�
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
//	while (t--)//�ȼ���for(;t<0;t--)
//	{
//		for (int i = 0; i < 3; i++)//input arrays
//			cin >> Left[i] >> Right[i] >> result[i];
//		for (char c = 'A'; c <= 'L'; c++)//����A-L
//		{
//			if (IsFake(c,true))//Ĭ����
//			{
//				cout << c << "is the counterfeit coin and it is light.\n";
//				break;
//			}
//			else if (IsFake(c,false))//������
//			{
//				cout << c << "is the counterfeit coin and it is heavy.\n";
//				break;
//			}
//		}
//	}
//	return 0;
//}