//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//#define cmpPrecision 0.0000001
//
//int compute(double* v, long N, double mid, long F);//�ٶ��ַ����ɵ������mid��ͳ���ܹ��ָ�ĸ���ans������ans��F�Ĵ�С��ϵ����1,0��-1.
//int main()
//{
//	long N, F;
//	long r, h = 1;
//	double* v = NULL, min = 0, max = 0, mid = 0;
//	double PI = acos(-1.0);//��ȡPI��ֵ
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
//		if (count >= 0) min = mid;//ע�⣬��count==0��ʱ�򣬲���һ���Ϳ��Խ������֡����ܿ��Էָ����Ŀ�ȴ�õ���ͬ������������Ҫ����Ϊ�������Ǹ�������������һ�������11������ÿһ�����3.1���Է�3�顣����ÿһ��3.5Ҳͬ��ֻ�ܷ�3�顣��ĿҪ����С���������Ե��ָ����պú���ʱ��һ����Ӧ�ý������֡���
//		else max = mid;
//	}
//	printf("%.3lf\n", min);
//	return 0;
//}
//int compute(double* v, long N, double mid, long F)//�ٶ��ַ����ɵ������mid��ͳ���ܹ��ָ�ĸ���ans������ans��F�Ĵ�С��ϵ����1,0��-1.
//{
//	long ans = 0, i;
//	for (i = 0; i < N; i++)
//	{
//		ans = ans + floor(v[i] / mid);//floor��ȡ����
//		if (ans > F) return 1;
//	}
//	if (ans == F) return 0;
//	else return -1;
//}