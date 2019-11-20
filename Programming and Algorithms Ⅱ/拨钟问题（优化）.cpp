//#include<iostream>
//using namespace std;
//int station[9];
//int result[9];
//int i4, i5, i6, i7, i8, i9;
//int main() {
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> station[i];
//	}//input
//	for (int i1 = 0; i1 < 4; i1++)
//	{
//		for (int i2 = 0; i2 < 4; i2++)
//		{
//			for (int i3 = 0; i3 < 4; i3++)
//			{
//				i4 = (4 - (i1 + i2 + station[0]) % 4) % 4;
//				i5 = (4 - (i1 + i2 + i3 + station[1]) % 4) % 4;
//				i6 = (4 - (i2 + i3 + station[2]) % 4) % 4;
//				i7 = (4 - (i1 + i4 + i5 + station[3]) % 4) % 4;
//				i9 = (4 - (i3 + i5 + i6 + station[5]) % 4) % 4;
//				if (
//					((i1 + i3 + i5 + i7 + i9 + station[4]) % 4 == 0) &&
//					((i4 + i7 + station[6]) % 4 == (i5 + i7 + i9 + station[7]) % 4) &&
//					((i4 + i7 + station[6]) % 4 == (i6 + i9 + station[8]) % 4)
//					)
//				{
//					int i8 = 4 - (i4 + i7 + station[6]) % 4;
//					result[0] = i1;
//					result[1] = i2;
//					result[2] = i3;
//					result[3] = i4;
//					result[4] = i5;
//					result[5] = i6;
//					result[6] = i7;
//					result[7] = i8;
//					result[8] = i9;
//				}
//			}
//		}
//	}//遍历1，2，3，三个按钮
//	for (int i = 0; i < 9; i++)
//	{
//		int n = result[i] % 4;
//		if (n != 0)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << i + 1 << ' ';
//			}
//
//		}
//	}
//	return 0;
//}