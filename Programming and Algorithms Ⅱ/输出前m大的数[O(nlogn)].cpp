#include <iostream>
using namespace std;
void Merge(int a[], int s, int m, int e, int tmp[])
{//������a�ľֲ�a[s,m]��a[m+1,e]�ϲ���tmp,����֤tmp����Ȼ���ٿ�����a[s,m]
//�鲢����ʱ�临�Ӷȣ�O��e-m+1),��O��n)
	int pb = 0;
	int p1 = s, p2 = m + 1;
	while (p1 <= m && p2 <= e) {//�������з���
		if (a[p1] < a[p2])//�жϴ�С
			tmp[pb++] = a[p1++];//i++���ȷ��غ�++,++i����++�󷵻�
		else
			tmp[pb++] = a[p2++];//��С�ķŽ�ȥ
	}
	while (p1 <= m)
		tmp[pb++] = a[p1++];//��ǰ�벿����ʣ�ಿ�ָ��Ƶ�tmp
	while (p2 <= e)
		tmp[pb++] = a[p2++];//����벿����ʣ�ಿ�ָ��Ƶ�tmp
	for (int i = 0; i < e - s + 1; ++i)//����������Ż�
		a[s + i] = tmp[i];
}
void MergeSort(int a[], int s, int e, int tmp[])
{
	if (s < e) {
		int m = s + (e - s) / 2;//mΪs��m��ֵ
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