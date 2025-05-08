//#include<stdio.h>
//int main()
//{
//	int n,max,min,max_index,min_index;
//	scanf("%d", &n);
//	int a[n];
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	int count = 0;
//	max = a[0];
//	min = a[0];
//	for (int i = 0;i < n;i++)
//	{
//		if (a[i] >= max)
//		{
//			max = a[i];
//		}
//		if (a[i] <= min)
//		{
//			min = a[i];
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		if (max == a[i]) {
//			max_index = i;
//			break;
//		}
//	}
//	for (int i = n - 1;i >= 0;i--)
//	{
//		if (min == a[i]) {
//			min_index = i;
//			break;
//		}
//	}
//
//	count = max_index + (n-1)-min_index;
//	if (max_index > min_index)
//		count--;
//	printf("%d", count);
//	return 0;
//}