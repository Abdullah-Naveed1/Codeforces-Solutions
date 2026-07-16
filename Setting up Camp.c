#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, c,tent=0;
		scanf("%d %d %d", &a, &b, &c);
		tent += a;
		tent += b / 3;
		b = b % 3;
		if (b == 1 && c <= 1 )
		{
			printf("-1\n");
			continue;
		}
		if (b == 2)
		{
			if (c < 1)
			{
				printf("-1\n");
				continue;
			}
			tent++;
			c--;
		}
		else if (b == 1)
		{
			tent++;
			c -= 2;
		}
		if (c != 0)
		{
			tent += c / 3;
			c = c % 3;
			if (c != 0)
				tent++;
		}
		printf("%d\n", tent);
	}
}