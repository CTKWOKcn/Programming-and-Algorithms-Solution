//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define	MAX 101
//int sum(int i,int j);
//int D(int i, int j);
//int a[MAX][MAX];
//int maxsum[MAX][MAX];
//int n;
//int main(){
//	int i, j;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < i + 1; j++) {
//			maxsum[i][j] = -1;
//			cin >> a[i][j];
//		}
//	cout << sum(0, 0) << endl;
//	return 0;
//}
//int D(int i, int j) {
//	return a[i][j];
//}
//int sum(int i,int j) {
//	if (maxsum[i][j] != -1)
//		return maxsum[i][j];
//	if (i == n)
//		return D(i, j);
//	else
//	{
//		int	x = sum(i + 1, j);
//		int y = sum(i + 1, j + 1);
//		return  max(x,y) + D(i, j);
//	}
//}
///*����
//5 
//7
//3 8
//8 1 0
//2 7 4 4
//4 5 2 6 5
//*/
////ʱ�临�Ӷ�n^2