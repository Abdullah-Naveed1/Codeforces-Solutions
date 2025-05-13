//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char guest[101], host[101], pile[101], alpha1[26] = { 0 }, alpha2[26] = { 0 };
//	scanf("%s %s %s", guest, host, pile);
//	int len1 = strlen(guest), len2 = strlen(host), len3 = strlen(pile);
//	if (len1 + len2 != len3)
//	{
//		printf("NO");
//		return 0;
//	}
//	for (int i = 0;i < len1;i++)
//	{
//		alpha1[guest[i] - 'A']++;
//	}
//	for (int i = 0;i < len2;i++)
//	{
//		alpha1[host[i] - 'A']++;
//	}
//	for (int i = 0;i < len3;i++)
//	{
//		alpha2[pile[i] - 'A']++;
//	}
//	for (int i = 0;i < 26;i++)
//	{
//		if (alpha1[i] != alpha2[i])
//		{
//			printf("NO");
//			return 0;
//		}
//	}
//	printf("YES");
//	return 0;
//}