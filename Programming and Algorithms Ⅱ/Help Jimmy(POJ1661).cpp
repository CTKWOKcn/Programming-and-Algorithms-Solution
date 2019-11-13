//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int INF = 999999;
//int N, X, Y, MAX;
//int X1[1000], X2[1000], H[1000];
//bool a[40001][20000];
//int V(int x, int y);
//int deltaY[40001][20000];
//int deltaXL(int x, int y);
//int deltaXR(int x, int y);
//int main() {
//	int t;
//	cin >> t;
//	while (t)
//	{
//		int x, y;
//		cin >> N >> X >> Y >> MAX;
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> X1[i] >> X2[i] >> H[i];
//		}
//		//预处理
//		for (int i = 0; i < 40001; i++)
//		{
//			for (int j = 0; j < 20000; j++)
//			{
//				a[i][j] = 0;
//			}
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = X1[i]; j <= X2[i]; j++)
//			{
//				a[j][H[i]] = 1;
//			}
//		}
//		/*-----------------------------------------------------------------*/
//		x = X;
//		y = Y;
//		int j = y;
//		for (; j >= 0; j--)
//		{
//			if (a[x][j] == 1)
//				break;
//		}
//		deltaY[x][y] = y - j;
//		for (int i = 1; i <= N; i++)
//		{
//			x = X1[i];
//			y = H[i];
//			j = y;
//			for (; j >= 0; j--)
//			{
//				if (a[x][j] == 1)
//					break;
//			}
//			deltaY[x][y] = y - j;
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			x = X2[i];
//			y = H[i];
//			j = y;
//			for (; j >= 0; j--)
//			{
//				if (a[x][j] == 1)
//					break;
//			}
//			deltaY[x][y] = y - j;
//		}
//
//		/*-----------------------------------------------------------------*///deltaY处理
//		cout << V(X, Y) << endl;
//		t--;
//	}
//	return 0;
//}
//int V(int x, int y) {
//	if (y == 0)
//	{
//		return 0;
//	}
//	else if (deltaY[x][y] >= MAX)
//	{
//		return INF;
//	}
//	else
//	{
//		int L = V(x - deltaXL(x, y), y - deltaY[x][y]) + deltaXL(x, y) + deltaY[x][y];
//		int R = V(x + deltaXR(x, y), y - deltaY[x][y]) + deltaXR(x, y) + deltaY[x][y];
//		return min(L, R);
//	}
//}
//
////int deltaY(int x, int y){
////	int i = y;
////	for (; i >= 0; i--)
////
////		if (a[x][i] == 1)
////		
////			break;
////	return y - i;
////}
//
//
//int deltaXL(int x, int y) {
//	int i = x;
//	for (; i >= 0; i--)
//
//		if (a[i][y] == 0)
//
//			break;
//	return x - i;
//}
//int deltaXR(int x, int y) {
//	int i = x;
//	for (; i <= 20000; i++)
//
//		if (a[i][y] == 0)
//
//			break;
//	return x + i;
//}
///*
//输出要求
//对输入的每组测试数据，输出一个整数，
//Jimmy到地面时可能的最早时间。
//输入样例 
//1                 
//3 8 17 20         
//0 10 8
//0 10 13
//4 14 3
//输出样例
//23
//*/