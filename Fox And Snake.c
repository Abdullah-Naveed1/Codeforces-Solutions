//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	char snake[n][m];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (i % 2 == 0)
//				snake[i][j] = '#';
//			else
//				snake[i][j] = '.'; // Fill odd rows with '.' first
//		}
//		if (i % 2 != 0)
//		{
//			if ((i / 2) % 2 == 0)
//				snake[i][m - 1] = '#'; // tail at end
//			else
//				snake[i][0] = '#';     // tail at start
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (snake[i][j] == '#')
//				printf("%c", snake[i][j]);
//			else
//				printf(".");
//		}
//		puts("");
//	}
//	return 0;
//}
