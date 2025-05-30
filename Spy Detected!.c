//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n,common,index=0;
//		scanf("%d", &n);
//		int a[n];
//		for (int i = 0;i < n;i++){
//			scanf("%d", &a[i]);
//		}
//		if (a[0] == a[1] || a[0] == a[2])
//			common = a[0];
//		else if (a[1] == a[2])
//			common = a[1];
//		for (int i = 0;i < n;i++) {
//			if (a[i] != common)
//			{
//				index = i;
//			}
//		}
//		printf("%d\n", ++index);
//	}
//}