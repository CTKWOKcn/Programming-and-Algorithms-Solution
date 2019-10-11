//#include<iostream>
//using namespace std;
//int win = 0, lose = 0;
//char a[] = { "A" };
//char b[] = { "B" };
//char draw[] = { "draw" };
//void judge(int x, int y) {
//	if ((x == 0 && y == 2) || (x == 2 && y == 5) || (x == 5 && y == 0))
//	{
//		win++;
//	}
//	else if ((y == 0 && x == 2) || (y == 2 && x == 5) || (y == 5 && x == 0))
//	{
//		lose++;
//	}
//}
//char* which_big(int x, int y) {
//	if (x > y)
//		return a;
//	else if (x == y)
//		return draw;
//	else
//		return b;
//}
//int main() {
//	int  N, NA, NB, a[1000], b[1000];
//	cin >> N >> NA >> NB;
//	for (int i = 0; i < NA; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < NB; i++)
//	{
//		cin >> b[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		a[i + NA] = a[i];
//		b[i + NB] = b[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		judge(a[i], b[i]);
//	}
//	cout << which_big(win, lose);
//	return 0;
//}
