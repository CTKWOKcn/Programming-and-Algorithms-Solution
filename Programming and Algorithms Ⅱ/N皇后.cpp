//#include<iostream>
//using namespace std;
//int n;
//int queenPos[100];
//void queen(int x)
//{
//	if (x == n)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			cout << queenPos[i] + 1 << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < x; j++)
//		{
//			if (queenPos[j] == i || abs(queenPos[j] - i) == abs(x - j)) {
//				break; //冲突，则试下一个位置
//			}
//		}
//		if (j == x) { //当前选的位置 i 不冲突
//			queenPos[x] = i; //将第k个皇后摆放在位置 i
//			queen(x + 1);
//		}
//
//	}
//}
//int main() 
//{
//	cin >> n;
//	queen(0);
//	return 0;
//}