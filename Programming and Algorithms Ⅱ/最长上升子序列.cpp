//#include<iostream>
//#include<algorithm>
//#include<string>
//const int MAXN = 1010;
//int a[MAXN]; int maxLen[MAXN];
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		maxLen[i] = 1;
//	}
//	for (int  i = 1; i < n; i++)
//	{
//		for (int  j = 0; j < i; j++)
//		{
//			if (a[i] > a[j])
//				maxLen[i] = max(maxLen[i], maxLen[j] + 1);
//		}
//	}
//	cout << maxLen[n - 1] << endl;
//	return 0;
//}
//
////ʲô�Ƕ�̬�滮��Dynamic Programming������̬�滮��������ʲô�� - ����ֹ�Ļش� - ֪��
////https://www.zhihu.com/question/23995189/answer/613096905
///*
//����1��
//7
//1 7 3 5 9 4 8
//
//output:4
//
//����2
//8
//1 5 3 4 6 9 7 8
//
//output:6
//*/