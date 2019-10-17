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
////什么是动态规划（Dynamic Programming）？动态规划的意义是什么？ - 阮行止的回答 - 知乎
////https://www.zhihu.com/question/23995189/answer/613096905
///*
//样本1：
//7
//1 7 3 5 9 4 8
//
//output:4
//
//样本2
//8
//1 5 3 4 6 9 7 8
//
//output:6
//*/