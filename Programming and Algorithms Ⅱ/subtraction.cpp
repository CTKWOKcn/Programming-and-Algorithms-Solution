#include <iostream>
#include <string>
using namespace std;
string subtraction(string s1, string s2)
{
	string error = "error";
	string s4, difference;//�����ַ���s1��s2
	if (s1.size() < s2.size())
		return error;
	int len = s1.size() - s2.size();
	string s3(len, '0');
	s2 = s3 + s2;//��0��ȫ������
	int a = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		int b = (s1[i] - '0') - (s2[i] - '0') - a;
		if (b < 0)
		{
			difference.push_back((b + 10) + '0'); //����ת��Ϊ�ַ����������ַ�����
			a = 1;
		}
		else {
			difference.push_back(b + '0'); //�����һλ��Ϊ�������ַ�����
			a = 0;
		}
	}
	string::reverse_iterator i = difference.rbegin();
	for (; i != difference.rend() - 1; ++i)//�ҵ�ǰ��0�ĵ�������
		if (*i != '0') break;//i������λ��
	for (; i != difference.rend(); ++i)//���ַ������������
	{
		s4 = s4 + *i;
	}
	return s4;
}