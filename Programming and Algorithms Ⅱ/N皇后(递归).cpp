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
//	if (k == N) {//N���ʺ��Ѿ��ں�,��������
//		for (i = 0; i < N; i++)
//		{
//			cout << queenpos[i] + 1 << ' ';//��0�п�ʼ����,���+1
//		}
//		cout << endl;
//		return;//�ݹ����
//	}
//	for (i = 0; i < N; i++)//������i�е�N��Ԫ��,���Ե�k���ʺ��λ��
//	{
//		int j;//���涨��,��Ϊ���»�Ҫ�õ�
//		for (j = 0; j < k; j++)//����k-1��
//		{
//			//����queenpos,Ӧ��������:
//			//queenpos[j]��x;
//			//          j��y;
//			//          i��b;
//			//�ʺ��ܷ�б��,��ֱ�߷���:
//			//(         y=x-b and y=b-x            )or(  y=|x-b|            )�ϵĵ㲻����,�ɸ�дΪ
//			//j=queenpos[j]-i and j=i-queenpos[j]   or(  j=|queenpos[j]-i|  )    
//
//			if (queenpos[j] == i || //�ж��������Ƿ��лʺ�
//				abs(queenpos[j] - i) == abs(k - j)) {//ͨ���ж�:�в����ֵ==�в����ֵ ��ʵ��
//				break;//�ҵ�������,˵�����ܷŻʺ�
//			}
//		}
//		if (j == k) {//˵��ѭ��������������,�������
//			queenpos[k] = i;//ѭ����������,��˵��:���λ��û�б�k-1�еĻʺ�Ե�,���λ�ÿ��ԷŻʺ�
//			Nqueen(k + 1);//�����ж���һ��,ֱ��k==N
//		}
//	}
//}