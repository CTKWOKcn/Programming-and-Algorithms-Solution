//#include<iostream>
//using namespace std;
//int Getbit(int n, int i) {
//	return (n >> i) & 1;
//}
//void func(int n) {
//	int plussign = 1;
//	for (int i = 15; i >= 0; --i)
//	{
//		if (Getbit(n, i))
//		{
//			if (plussign==0)
//			{
//				cout << '+';
//			}
//			else
//			{
//				plussign = 0;
//			}
//			if (i == 0)
//			{
//				cout << "2(0)";
//			}
//			else if (i == 1)
//			{
//				cout << "2";
//			}
//			else
//			{
//				cout << "2(";
//				func(i);
//				cout << ")";
//			}
//		}
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	func(n);
//	return 0;
//}