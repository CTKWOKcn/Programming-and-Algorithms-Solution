//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define	MAX 101
//int a[MAX][MAX];
//int n;
//int* maxSum;
//int main() {
//	int i, j;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < i + 1; j++)
//			cin >> a[i][j];
//	maxSum = a[n];
//	for (int i = n - 1; i >= 0; --i)
//		for (int j = 0; j < i+1; ++j)
//			maxSum[j] = max(maxSum[j], maxSum[j + 1]) + a[i][j];
//	cout << maxSum[0] << endl;
//}
///*样本
//5
//7
//3 8
//8 1 0
//2 7 4 4
//4 5 2 6 5
//*/
////时间复杂度2^n