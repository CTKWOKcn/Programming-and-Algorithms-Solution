#include <iostream>
#include <string>
using namespace std;
string addition(string s1,string s2)
{
	string s4, sum;//�����ַ���s1��s2
	//�϶̵��ַ������ڵڶ�λ��
	if (s1.size() < s2.size())
	{
		string temp = s1;
		s1 = s2;
		s2 = temp;
	}
	int len = s1.size() - s2.size();
	string s3(len, '0');
	s2 = s3 + s2;
	int a = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		int b = (s1[i] - '0') + (s2[i] - '0') + a;
		if (b > 9)
		{
			sum.push_back((b - 10) + '0'); //����ת��Ϊ�ַ����������ַ�����
			a = 1;
		}
		else {
			sum.push_back(b + '0'); //�����һλ��Ϊ�������ַ�����
			a = 0;
		}
	}
	sum.push_back(a + '0');
	string::reverse_iterator i = sum.rbegin();
	for (; i != sum.rend() - 1; ++i)//�ҵ�ǰ��0�ĵ�������
		if (*i != '0') break;//i������λ��
	for (; i != sum.rend(); ++i)//���ַ������������
	{
		s4 = s4 + *i;
	}
	return s4;
}