//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int INF = 99999999;
//int a[1005], num[1005][1005];
//char str[1005];
//int V(int m, int n)
//{
//	if (m == 0)//无加号
//		return num[1][n];
//	else if (n < m + 1)//加号过多
//		return INF;
//	else
//	{
//		int t = INF;
//		for (int i = m; i <= n - 1; i++)
//			t = min(t, V(m - 1, i) + num[i + 1][n]);
//		return t;
//	}
//}
//
////int main()
////{
////	int n, m;
////	while (~scanf_s("%d%d", &n, &m))
////	{
////		for (int i = 1; i <= n; i++)
////			scanf_s("%d", &a[i]);
////		//预处理,计算i到j数字串组成的数字
////		for (int i = 1; i <= n; i++)
////		{
////			num[i][i] = a[i];//只有一个数字
////			for (int j = i + 1; j <= n; j++)
////			{
////				num[i][j] = num[i][j - 1] * 10 + a[j];
////			}
////		}
////		cout << V(m, n) << endl;
////	}
////	return 0;
////}
//int main()
//{
//	int n, m;
//	while (cin >> m >> str)
//	{
//		n = strlen(str);
//		for (int i = 0; i < n; i++)
//		{
//			a[i + 1] = str[i] - '0';
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			num[i][i] = a[i];
//			for (int j = i+1; j <= n; j++)
//			{
//				num[i][j] = num[i][j - 1] * 10 + a[j];
//			}
//		}
//		cout << V(m, n) << endl;
//	}
//	return 0;
//}
//
///*
//sample input:
//2
//123456
//
//1
//123456
//
//4
//12345
//
//sample output:
//102
//579
//15
//
//*/
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
///*
//有一个由1..9组成的数字串.问如果将m个加
//号插入到这个数字串中,在各种可能形成的
//表达式中，值最小的那个表达式的值是多少
//
//解题思路
//假定数字串长度是n，添完加号后,表达式的最后
//一个加号添加在第 i 个数字后面，那么整个表达
//式的最小值，就等于在前 i 个数字中插入 m – 1
//个加号所能形成的最小值，加上第 i + 1到第 n
//个数字所组成的数的值（i从1开始算）。
//设V(m,n)表示在n个数字中插入m个加号所能形成
//的表达式最小值，那么：
//if m = 0
//V(m,n) = n个数字构成的整数
//else if n < m + 1
//V(m,n) = ∞
//else
//V(m,n) = Min{ V(m-1,i) + Num(i+1,n) } ( i = m … n-1)
//Num(i,j)表示从第i个数字到第j个数字所组成的数。数字编号从1开始算。此操
//作复杂度是O(j-i+1)，可以预处理后存起来。
//总时间复杂度：O(mn2) .
//若 n 比较大，long long 不够存放运算过程中的整数，则需要使用高精度计算
//（用数组存放大整数，模拟列竖式做加法），复杂度为O(mn3)
//*/