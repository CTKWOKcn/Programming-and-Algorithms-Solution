//#include <string>
//using namespace std;
//string subtraction(string Minuend, string Reduction)
//{
//	string error = "error";
//	string Difference, difference;//�����ַ���Minuend��Reduction
//	if (Minuend.size() < Reduction.size())
//		return error;
//	int len = Minuend.size() - Reduction.size();
//	string Temp(len, '0');
//	Reduction = Temp + Reduction;//��0��ȫ������
//	int a = 0;
//	for (int i = Minuend.size() - 1; i >= 0; i--)
//	{
//		int b = (Minuend[i] - '0') - (Reduction[i] - '0') - a;
//		if (b < 0)
//		{
//			difference.push_back((b + 10) + '0'); //����ת��Ϊ�ַ����������ַ�����
//			a = 1;
//		}
//		else {
//			difference.push_back(b + '0'); //�����һλ��Ϊ�������ַ�����
//			a = 0;
//		}
//	}
//	string::reverse_iterator i = difference.rbegin();
//	for (; i != difference.rend() - 1; ++i)//�ҵ�ǰ��0�ĵ�������
//		if (*i != '0') break;//i������λ��
//	for (; i != difference.rend(); ++i)//���ַ������������
//	{
//		Difference = Difference + *i;
//	}
//	return Difference;
//}