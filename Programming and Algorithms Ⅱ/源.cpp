//#include<iostream>
//using namespace std;
//int test1()
//{
//	int a = 3;
//	test1(); /* recursive, but not a tail call.  We continue */
//			 /* processing in the function after it returns. */
//	a = a + 4;
//	return a;
//}
//int test2()
//{
//	int q = 4;
//	q = q + 5;
//	return q + test1(); /* test1() is not in tail position.
//						 * There is still more work to be
//						 * done after test1() returns (like
//						 * adding q to the result
//						 */
//}
//int test3()
//{
//	int b = 5;
//	b = b + 2;
//	return test1();  /* This is a tail-call.  The return value
//					 * of test1() is used as the return value
//					 * for this function.
//					 */
//}
//int test4()
//{
//	test3(); /* not in tail position */
//	test3(); /* not in tail position */
//	return test3(); /* in tail position */
//}
//int main() {
//	cout<<test4();
//	return 0;
//}