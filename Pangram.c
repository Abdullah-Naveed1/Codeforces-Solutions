//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char str[n + 1];
//	scanf("%s", str);
//	if (n < 26)
//	{
//		printf("NO\n");
//		return 0; 
//	}
//	int arr[26] = { 0 };
//	for (int i = 0;str[i] != '\0';i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//			arr[str[i] - 'A']++;
//		else if (str[i] >= 'a' && str[i] <= 'z')
//			arr[str[i] - 'a']++;
//	}
//	for (int i = 0;i < 26;i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("NO\n");
//			return 0;
//		}
//	}
//	printf("YES\n");
//	return 0;
//}