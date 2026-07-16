#include<stdio.h>
int main()
{
	int n,p,q;
	scanf("%d", &n);
	int count[n];
	for (int i = 0;i < n;i++)
	{
		count[i] = 0;
	}
	scanf("%d", &p);
	int a[p];
	for (int i = 0;i < p;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &q);
	int b[q];
	for (int i = 0;i < q;i++)
	{
		scanf("%d", &b[i]);
	}
	for (int k = 0;k < p;k++)
	{
		count[a[k] - 1]++;
	}
	for (int k = 0;k < q;k++)
	{
		count[b[k] - 1]++;
	}
	for (int i = 0;i < n;i++)
	{
		if (count[i] == 0)
		{
			printf("Oh, my keyboard!");
			return 0;
		}
	}
	printf("I become the guy.");
	return 0;
}