//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int INF = 999999;
//int a[1005], num[1005][1005],V[1005][1005];
//char str[1005];
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
//		//预处理数据
//
//		memset(V, 0x7f, sizeof(V));//https://blog.csdn.net/dan15188387481/article/details/49621447
//		/*memset是按照字节初始化的，一个字节有八个位二进制位，即：（0000 0000）
//		而int有四个字节，即：（0000 0000 0000 0000 0000 0000 0000 0000）
//		*/
//		for (int i = 1; i <= n; i++)
//			V[0][i] = num[1][i];
//		
//		for (int i = 1; i <= m; i++)
//			for (int j = i; j <= n; j++)
//				for (int k = i; k <= j; k++)
//					V[i][j] = min(V[i][j], V[i - 1][k] + num[k + 1][j]);
//		cout << V[m][n] << endl;
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
//
//579
//
//15
//
//*/
