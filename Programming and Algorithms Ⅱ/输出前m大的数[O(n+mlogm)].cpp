#include <iostream>
using namespace std;
void swap(int& a, int& b) //交换变量a,b值
{
	int tmp = a;
	a = b;
	b = tmp;
}
void arrangeRight(int a[], int s, int e, int m)
{
	if (s >= e)
		return;
	int key = a[s];
	int i = s, j = e;
	while (i != j) {
		while (j > i && a[j] >= key)
			--j;
		swap(a[i], a[j]);
		while (i < j && a[i] <= key)
			++i;
		swap(a[i], a[j]);
	}
	if (e - i + 1 == m)
		return;
	else if (e - i + 1 > m)
		arrangeRight(a + i + 1, i + 1, e, m);
	else if (e - i + 1 < m)
		arrangeRight(a, s, i - 1, m - e + i - 1);
}
int a[100000];// { 13 27 19 2 8 12 2 8 30 89 }
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	arrangeRight(a, 0, n - 1,m);
	for (int i = n - m; i < n; i++)
		cout << a[i] << ",";
	cout << endl;
	return 0;
}