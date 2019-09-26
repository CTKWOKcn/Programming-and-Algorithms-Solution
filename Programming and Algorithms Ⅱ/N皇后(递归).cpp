//#include<iostream>
//#include<cmath>
//using namespace std;
//int queenpos[100];
//int N;
//void Nqueen(int k);
//int main() {
//	cin >> N;
//	Nqueen(0);
//	return 0;
//}
//void Nqueen(int k) {
//	int i;
//	if (k == N) {//N个皇后已经摆好,则遍历输出
//		for (i = 0; i < N; i++)
//		{
//			cout << queenpos[i] + 1 << ' ';//从0行开始计算,因此+1
//		}
//		cout << endl;
//		return;//递归结束
//	}
//	for (i = 0; i < N; i++)//遍历第i行的N个元素,尝试第k个皇后的位置
//	{
//		int j;//外面定义,因为等下还要用到
//		for (j = 0; j < k; j++)//遍历k-1行
//		{
//			//对于queenpos,应当如此理解:
//			//queenpos[j]→x;
//			//          j→y;
//			//          i→b;
//			//皇后不能放斜线,即直线方程:
//			//(         y=x-b and y=b-x            )or(  y=|x-b|            )上的点不成立,可改写为
//			//j=queenpos[j]-i and j=i-queenpos[j]   or(  j=|queenpos[j]-i|  )    
//
//			if (queenpos[j] == i || //判断竖线上是否有皇后
//				abs(queenpos[j] - i) == abs(k - j)) {//通过判断:行差绝对值==列差绝对值 来实现
//				break;//找到就跳出,说明不能放皇后
//			}
//		}
//		if (j == k) {//说明循环是正常结束的,遍历完毕
//			queenpos[k] = i;//循环正常结束,则说明:这个位置没有被k-1行的皇后吃掉,这个位置可以放皇后
//			Nqueen(k + 1);//继续判断下一行,直到k==N
//		}
//	}
//}