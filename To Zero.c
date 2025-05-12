//#include<stdio.h>
//
////time limit exceeds on codeforces (not even AI can solve this)
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n, k,count=0;
//		scanf("%d %d", &n, &k);
//		while (n != 0)
//		{
//			if (n >= k) {
//				if (n % 2 == 1 && k % 2 == 1) {
//					n = n - k;
//					count++;
//				}
//				else if (n % 2 == 0 && k % 2 == 1) {
//					n = n - (k - 1);
//					count++;
//				}
//			}
//			else {
//				n = 0;
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//}