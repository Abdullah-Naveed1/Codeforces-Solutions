//#include<stdio.h>
//int main() {
//	int n,count_M=0,count_C=0;
//	scanf("%d", &n);
//	int a[n][2];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 2; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (a[i][0] > a[i][1])
//			count_M++;
//		else if (a[i][1] > a[i][0])
//			count_C++;
//	}
//	if (count_M > count_C)
//		printf("Mishka");
//	else if (count_C > count_M)
//		printf("Chris");
//	else
//		printf("Friendship is magic!^^");
//}