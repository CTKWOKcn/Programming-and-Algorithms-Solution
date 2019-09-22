//#include<iostream>
//#include<cstring>
//using namespace std;
//char Left[3][7];
//char Right[3][7];
//char result[3][7];
//char temp[50];
//int main() {
//	for (int i = 0; i < 3; i++)//input arrays
//		cin >> Left[i] >> Right[i] >> result[i];
//	for (int i = 0; i < 3; i++)
//	{
//		if (result[i][0]=='e')
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				temp[i+6*j] = Left[i][j];
//				for (int k = 0; k < 3; k++)
//				{
//					for (int l = 0; l < 7; l++)
//					{
//						if (temp[i + 6 * j] == Left[i][j])Left[i][j] = 0;
//						if (temp[i + 6 * j] == Right[i][j])Right[i][j] = 0;
//					}
//				}
//			} 
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (Left[i][j] != 0)cout << Left[i][j];
//			if (Right[i][j] != 0)cout << Right[i][j];
//		}
//	}
//
//	return 0;
//}