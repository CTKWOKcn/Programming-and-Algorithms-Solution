//
//#include<iostream>
//using namespace std;
//����
//void swap(int& a, int& b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//ȫ���еݹ��㷨
//void Perm(int list[], int k, int m)
//{
//	list ���������е�����K��ʾ�� ����ڼ�������m��ʾ����ĳ���
//	if (k == m)
//	{
//		K==m ��ʾ�������һ�����������ٽ��������յ����е�����Ҫ�����
//		for (int i = 0; i <= m; i++)
//			cout << list[i];
//		cout << endl;
//	}
//	else {
//		for (int i = k; i <= m; i++)
//		{
//			swap(list[i], list[k]);
//			Perm(list, k + 1, m);
//			swap(list[i], list[k]);
//		}
//	}
//
//}
//int main()
//{
//	char a[] = { 1,2,3 };
//	int m = 2;
//	Perm(a, 0, 2);
//	/*
//  123
//  132
//  213
//  231
//  321
//  312
//*/
//}