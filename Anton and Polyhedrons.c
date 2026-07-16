#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	scanf("%d", &n);
	char s[n];
	while (n--)
	{
		scanf("%s", s);
		if (s[0] == 'T')
			sum += 4;
		else if (s[0] == 'C')
			sum += 6;
		else if (s[0] == 'O')
			sum += 8;
		else if (s[0] == 'D')
			sum += 12;
		else if (s[0] == 'I')
			sum += 20;
	}
	printf("%d", sum);
	return 0;
}