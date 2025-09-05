//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (a[i] > a[j]) {
//					int temp = a[i];
//					a[i] = a[j];
//					a[j] = temp;
//				}
//			}
//		}
//		int yes = 1;
//		for (int i = 0; i < n; i++) {
//			if (a[i] == a[i + 1] && i + 1 < n) {
//				printf("NO\n");
//				yes = 0;
//				break;
//			}
//		}
//		if (yes == 1)
//			printf("YES\n");
//	}
//}