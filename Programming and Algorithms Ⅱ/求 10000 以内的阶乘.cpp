//#include<iostream>
//#include <string>
//using namespace std;
//char a[201], b[201], c[201];
//char d[] = { "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001" };
//string factorial(string n) {
//	int m = 0;
//	for (int i = 201 - n.length(); i < 201; i++)
//	{
//		a[i] = n[m];
//		m++;
//	}
//	if (strcmp(d, a)==0)
//	{
//		return d;
//	}
//	else
//		return multiplication(n, factorial(n - 1) );
//}
//string subtraction(string s1) {
//	s1[s1.length() - 1] = s1[s1.length() - 1] - 1;
//}
//string addition(string s1,string s2) {
//	string s3;
//	int m = 0;
//	for (int i = 201 - s1.length(); i < 201; i++)//s1.length ��ȡs1�ĳ��ȣ�ѭ����201-�ַ��������Σ�����������濪ʼ��ֵ
//	{
//		a[i] = s1[m];
//		m++;
//	}
//	m = 0;
//	for (int i = 201 - s2.length(); i < 201; i++)//ͬ���Ӻ��濪ʼ��ֵ��b����
//	{
//		b[i] = s2[m];
//		m++;
//	}
//	for (int i = 200; i >= 0; i--)//��200��ʼ���㣬��Ϊ201�ǿ�λ����200��0��ѭ��
//	{
//		c[i] += (a[i] - '0' + b[i] - '0');//�����a[i]��Ԫ���ַ�0�ĵ�ַ����С��Ϊa�����ִ�С����bͬ����ӵõ�a+b��ֵ
//		if (c[i] > '9')//��λ���㣬��ʱc�Ĵ�С�����ǣ������ַ�ֵ�Ĵ�С
//		{
//			c[i] = c[i] - ':' + '0';//ð�ţ���Ӧ��ASCII��10���ֺţ���11.
//			c[i - 1] = '1';//��һ
//		}
//	}
//	m = 0;//׼�����
//	while (c[m] == '0' && m < 200)//ǰ��0  �� �˴������൱�� for(int m=0;c[m]==0;m++){- -�ƺ������е������}
//		m++;//�˴����� ������ ���ڼ���ǰ��0�ĸ�����m<200�������Ƿ�ֹ����Խ��
//	if (m >= 200)
//		cout << '0';//��������
//	else
//	{
//		for (int i = m; i < 201; i++)//������
//		{
//			int x = 0;
//			s3[x] << c[i];
//			x++;
//		}
//	}
//	return s3;
//}
//string multiplication(string s1, string s2) {
//	int n = std::stoi(s2);
//	for (int i = 0; i < n; i++)
//	{
//		addition(s1, s1);
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	return 0;
//}
