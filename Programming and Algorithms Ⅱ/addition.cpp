//#include <string>
//using namespace std;
//string addition(string addend,string augend)
//{
//	string Temp_sum, sum;//�����ַ���addend��augend
//	//�϶̵��ַ������ڵڶ�λ��
//	if (addend.size() < augend.size())
//	{
//		string temp = addend;
//		addend = augend;
//		augend = temp;
//	}
//	int len = addend.size() - augend.size();
//	string s3(len, '0');
//	augend = s3 + augend;
//	int a = 0;
//	for (int i = addend.size() - 1; i >= 0; i--)
//	{
//		int b = (addend[i] - '0') + (augend[i] - '0') + a;
//		if (b > 9)
//		{
//			sum.push_back((b - 10) + '0'); //����ת��Ϊ�ַ����������ַ�����
//			a = 1;
//		}
//		else {
//			sum.push_back(b + '0'); //�����һλ��Ϊ�������ַ�����
//			a = 0;
//		}
//	}
//	sum.push_back(a + '0');
//	string::reverse_iterator i = sum.rbegin();
//	for (; i != sum.rend() - 1; ++i)//�ҵ�ǰ��0�ĵ�������
//		if (*i != '0') break;//i������λ��
//	for (; i != sum.rend(); ++i)//���ַ������������
//	{
//		Temp_sum = Temp_sum + *i;
//	}
//	return Temp_sum;
//}