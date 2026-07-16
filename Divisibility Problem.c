#include<stdio.h>
int main()
{
	int n,num1,num2;
	scanf("%d", &n);
	while (n--)
	{
		int count = 0;
		scanf("%d%d", &num1, &num2);
		if(num1%num2==0)
			printf("0\n");
		else
		{
			if(num2>num1)
				printf("%d\n", num2 - num1);
			else
			{
				int i = num1 / num2;
				int j = num1 % num2;
				printf("%d\n", ((i + 1) * num2) - num1);
			}
		}
	}
	return 0;
}