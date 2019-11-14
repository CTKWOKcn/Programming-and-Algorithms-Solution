//#include <memory>
//#include <string>
//#include <cstring>
//#include <iostream>
//using namespace std;
//string stra, strb;
//string oristra;
//int na, nb;
//int n[2]={0,0};
//int main() {
//	cin >> oristra;
//	cin >> strb;
//	stra = oristra;
//	na = oristra.size();
//	nb = strb.size();
//	if (na != nb)
//		cout << "error" << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		stra = oristra;
//		if (i)
//		{
//			if (stra[0] == '1')//changestring(stra[0]),changestring(stra[1])
//				stra[0] = '0';
//			else
//				stra[0] = '1';
//
//			if (stra[1] == '1')
//				stra[1] = '0';
//			else
//				stra[1] = '1';
//			//----------------------------------------------------------//
//			n[i]++;
//		}
//		for (int j = 0; j < na - 1; j++)
//		{
//			if (stra[j] != strb[j])
//			{
//				n[i]++;
//				//changestring(stra[j+1]),changestring(stra[j+2])
//
//
//				if (stra[j + 1] == '1')
//					stra[j + 1] = '0';
//				else
//					stra[j + 1] = '1';
//
//				if (j != na - 2)
//				{
//					if (stra[j + 2] == '1')
//						stra[j + 2] = '0';
//					else
//						stra[j + 2] = '1';
//				}
//			}
//		}
//
//		if (stra[na - 1] != strb[na - 1])
//		{
//			n[i] = 99;
//		}
//	}
//	if (n[0] == 99 && n[1] == 99)
//	{
//		cout << "impossible" << endl;
//	}
//	else if (n[0] < n[1])
//	{
//		cout << n[0];
//	}
//	else
//		cout << n[1];
//	return 0;
//}