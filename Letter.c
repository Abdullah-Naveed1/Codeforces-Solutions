#include<stdio.h>
int main()
{
	int n, m,l=0,t=0,r=0,b=0,left,right,top,bottom;
	scanf("%d %d", &n, &m);
	char s[n][m];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			scanf(" %c", &s[i][j]);
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (s[i][j] == '*' && t == 0)
			{
				top = i;
				t = 1;
			}
			else if (s[i][j] == '*' && s[i][j + 1] != '*' && r == 0)
			{
				right = j;
				r = 1;
			}
			else if (s[i][j] == '*' && s[i + 1][j] != '*' && l == 0)
			{
				left = i;
				l = 1;
			}
			else if (s[i][j] == '*' && s[i + 1][j + 1] != '*' && b == 0)
			{
				bottom = j;
				b = 1;
			}
		}
	}
	for (int i = top;i <= left;i++)
	{
		for (int j = left;j <= right;j++)
		{
			printf("%c", s[i][j]);
		}
		puts("");
	}
	return 0;
}