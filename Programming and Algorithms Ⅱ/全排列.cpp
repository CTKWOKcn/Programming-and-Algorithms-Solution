//#include<iostream>
//#include<algorithm>
//using namespace std;
//int result[10];
//int factorial(int n);
//void allrank(char* a, int cengshu, int length);
//int main() {
//	char a[10];
//	cin >> a;
//	//input 
//	int N = strlen(a);
//	int length = N;
//	//char length
//	allrank(a, 0, length);
//	return 0;
//}
//void allrank(char* a, int cengshu,int length) {
//	if (cengshu == length - 1)
//	{
//		for (int i = 0; i < length; i++)
//		{
//			cout << a[i];
//		}
//		cout << endl;
//	}
//	else
//	{
//		for (int i = cengshu; i < length; i++)
//		{
//
//			swap(a[cengshu], a[i]);
//			//sort(a + 1+ cengshu, a + length);
//			allrank(a, cengshu + 1, length);
//			swap(a[cengshu], a[i]);
//		}
//
//	}
//}
//
