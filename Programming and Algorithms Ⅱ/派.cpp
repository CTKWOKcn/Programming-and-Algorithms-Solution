//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//#define cmpPrecision 0.0000001
//
//int compute(double* v, long N, double mid, long F);//假定分发的派的体积是mid，统计能够分割的个数ans。根据ans与F的大小关系返回1,0，-1.
//int main()
//{
//	long N, F;
//	long r, h = 1;
//	double* v = NULL, min = 0, max = 0, mid = 0;
//	double PI = acos(-1.0);//获取PI的值
//	long i;
//	long count;
//
//	freopen("5.in", "r", stdin);
//	scanf("%ld%ld", &N, &F);
//	F++;
//	v = (double*)malloc(N * sizeof(double));
//	memset(v, 0, N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%ld", &r);
//		v[i] = PI * r * r * h;
//		if (v[i] > max) max = v[i];
//	}
//
//	while (max - min > cmpPrecision)
//	{
//		mid = min + (max - min) / 2;
//		count = compute(v, N, mid, F);
//		if (count >= 0) min = mid;//注意，当count==0的时候，并不一定就可以结束二分。可能可以分割更大的块却得到相同的数量。（主要是因为块的体积是浮点数。比如有一块总体积11，假如每一块体积3.1可以分3块。但是每一块3.5也同样只能分3块。题目要求块大小尽量大，所以当分割结果刚好合适时不一定就应该结束二分。）
//		else max = mid;
//	}
//	printf("%.3lf\n", min);
//	return 0;
//}
//int compute(double* v, long N, double mid, long F)//假定分发的派的体积是mid，统计能够分割的个数ans。根据ans与F的大小关系返回1,0，-1.
//{
//	long ans = 0, i;
//	for (i = 0; i < N; i++)
//	{
//		ans = ans + floor(v[i] / mid);//floor下取整。
//		if (ans > F) return 1;
//	}
//	if (ans == F) return 0;
//	else return -1;
//}