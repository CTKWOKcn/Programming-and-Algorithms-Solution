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
//				break; //��ͻ��������һ��λ��
//			}
//		}
//		if (j == x) { //��ǰѡ��λ�� i ����ͻ
//			queenPos[x] = i; //����k���ʺ�ڷ���λ�� i
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