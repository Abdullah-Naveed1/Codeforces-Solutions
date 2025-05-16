//#include<stdio.h>
//#include<string.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int len,count=0,dig=0;
//		char num[101];
//		scanf("%s", num);
//		len = strlen(num);
//		for (int i = len-1;i >=0;i--)
//		{
//			if (num[i] == '0')
//				count++;
//			else {
//				dig = i;
//				break;
//			}
//		}
//		for (int i = dig-1;i >= 0;i--) {
//			if (num[i] >= '1' && num[i]<='9')
//				count++;
//		}
//		printf("%d\n", count);
//	}
//}