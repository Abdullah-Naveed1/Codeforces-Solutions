//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, k;
//		scanf("%d %d", &n, &k);
//		int a[n], b[n];
//		for (int i = 0; i< n; i++) {
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &b[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = i+1; j < n; j++) {
//				if (a[i] > a[j]) {
//					int temp = a[i];
//					a[i] = a[j];
//					a[j] = temp;
//				}
//				if (b[i] < b[j]) {
//					int temp = b[i];
//					b[i] = b[j];
//					b[j] = temp;
//				}
//			}
//		}
//		for (int i = 0; i < k; i++) {
//			if (b[i] > a[i]) {
//				int temp = a[i];
//				a[i] = b[i];
//				b[i] = temp;
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i < n; i++) {
//			sum += a[i];
//		}
//		printf("%d\n", sum);
//	}
//}