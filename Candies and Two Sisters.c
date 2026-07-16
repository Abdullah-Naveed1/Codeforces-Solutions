#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, count = 0;
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			count = n / 2 - 1;
		}
		else
		{
			count = n / 2;
		}
		printf("%d\n", count);
	}
}