//#include<iostream>
//#include<cstring>
//using namespace std;
//bool a[5][6];
//int b1,b2,b3,b4,b5;
////define a function that can input a coordinate to change the states of light
//void changefunction(int x, int y) {
//	if (x==0&&y==0)//�ĸ���
//	{
//		a[x][y] = !a[x][y];
//		a[x][y+1] = !a[x][y+1];
//		a[x+1][y] = !a[x+1][y];
//	}
//	if (x == 0 && y == 5)//�ĸ���
//	{
//		a[x][y] = !a[x][y];
//		a[x+1][y] = !a[x+1][y];
//		a[x][y-1] = !a[x][y-1];
//	}
//	if (x == 4 && y == 0)//�ĸ���
//	{
//		a[x][y] = !a[x][y];
//		a[x-1][y] = !a[x-1][y];
//		a[x][y+1] = !a[x][y+1];
//	}
//	if (x == 4 && y == 5)//�ĸ���
//	{
//		a[x][y] = !a[x][y];
//		a[x][y - 1] = !a[x][y - 1];
//		a[x - 1][y] = !a[x - 1][y];
//	}
//	else if (x == 0 && y != 0 && y != 5)//��Եup
//	{
//		a[x][y] = !a[x][y];
//		a[x][y + 1] = !a[x][y + 1];
//		a[x][y - 1] = !a[x][y - 1];
//		a[x+1][y] = !a[x+1][y];
//	}
//	else if (x == 4 && y != 0 && y != 5)//��Եdown
//	{
//		a[x][y] = !a[x][y];
//		a[x][y + 1] = !a[x][y + 1];
//		a[x][y - 1] = !a[x][y - 1];
//		a[x - 1][y] = !a[x - 1][y];
//	}
//	else if (y == 0 && x != 0 && x != 4)//��Եleft
//	{
//		a[x][y] = !a[x][y];
//		a[x + 1][y] = !a[x + 1][y];
//		a[x - 1][y] = !a[x - 1][y];
//		a[x][y + 1] = !a[x][y + 1];
//
//	}
//	else if (y == 5 && x != 0 && x != 4)//��Եright
//	{
//		a[x][y] = !a[x][y];
//		a[x + 1][y] = !a[x + 1][y];
//		a[x - 1][y] = !a[x - 1][y];
//		a[x][y - 1] = !a[x][y - 1];
//	}
//	else//�м�
//	{
//		a[x][y] = !a[x][y];
//		a[x][y + 1] = !a[x][y + 1];
//		a[x][y - 1] = !a[x][y - 1];
//		a[x + 1][y] = !a[x + 1][y];
//		a[x - 1][y] = !a[x - 1][y];
//	}
//}
//void matrix() {
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (a[j][i - 1])
//			{
//				changefunction(j, i);
//			}
//		}
//	}
//}
//int main() {
//	int N, m = 1;
//	cin >> N;
//	while (N--)
//	{	
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	//��������
//	for (int i = 0; i < 2; i++)
//	{
//		changefunction(0, 0);
//		for (int j = 0; j < 2; j++)
//		{	
//			b1 = j;
//			changefunction(1, 0);
//			
//			for (int k = 0; k < 2; k++)
//			{
//				b2 = k;
//				changefunction(2, 0);
//				for (int l = 0; l < 2; l++)
//				{
//					b3 = l;
//					changefunction(3, 0);
//					for (int m = 0; m < 2; m++)
//					{
//						b4 = m;
//						changefunction(4, 0);
//						for (int n = 0; n < 2; n++)
//						{
//							b5 = n;
//							changefunction(5, 0);							
//							matrix();
//							if(a[4][0]+a[4][1]+a[4][2]+a[4][3]+a[4][4]+a[4][5]==0)
//							goto breakLoop;
//						}
//					}
//				}
//			}
//		}
//	}
//	//ö�ٵ�һ�����п��� 2^5=32
//	breakLoop:
//	cout << "PUZZLE#" << m++ << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			cout << b1 << b2 << b3 << b4 << b5;
//		}
//	}
//	//������
//	}
//}