#include<stdio.h>
int main()
{
	long double o;
	int n, sum = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	o = (long double)sum / n;
	printf("%Lf", o);
	return 0;
}