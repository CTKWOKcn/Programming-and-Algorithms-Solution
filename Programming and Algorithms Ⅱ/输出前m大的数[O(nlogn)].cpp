#include <iostream>
using namespace std;
void Merge(int a[], int s, int m, int e, int tmp[])
{//将数组a的局部a[s,m]和a[m+1,e]合并到tmp,并保证tmp有序，然后再拷贝回a[s,m]
//归并操作时间复杂度：O（e-m+1),即O（n)
	int pb = 0;
	int p1 = s, p2 = m + 1;
	while (p1 <= m && p2 <= e) {//画出数列分析
		if (a[p1] < a[p2])//判断大小
			tmp[pb++] = a[p1++];//i++是先返回后++,++i是先++后返回
		else
			tmp[pb++] = a[p2++];//把小的放进去
	}
	while (p1 <= m)
		tmp[pb++] = a[p1++];//将前半部数组剩余部分复制到tmp
	while (p2 <= e)
		tmp[pb++] = a[p2++];//将后半部数组剩余部分复制到tmp
	for (int i = 0; i < e - s + 1; ++i)//将整个数组放回
		a[s + i] = tmp[i];
}
void MergeSort(int a[], int s, int e, int tmp[])
{
	if (s < e) {
		int m = s + (e - s) / 2;//m为s→m中值
		MergeSort(a, s, m, tmp);
		MergeSort(a, m + 1, e, tmp);
		Merge(a, s, m, e, tmp);
	}
}

int a[100000];// { 13 27 19 2 8 12 2 8 30 89 }
int b[10];
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
	MergeSort(a, 0, n - 1, b);
	for (int i = n - 1; i > n - 1 - m; --i)
		cout << a[i] << ",";
	cout << endl;
	return 0;
}