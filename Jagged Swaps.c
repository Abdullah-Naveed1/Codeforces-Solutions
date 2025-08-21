//#include<stdio.h>
//int isSorted(int a[], int size) {
//	int sorted = 1;
//	for (int i = 0; i < size-1; i++) {
//		if (a[i] >= a[i + 1])
//			sorted = 0;
//	}
//	return sorted;
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n,output=0;
//		scanf("%d", &n);
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		for (int i = 1; i < n; i++) {
//			if (isSorted(a, n) == 0) {
//				if (a[i - 1]<a[i] && a[i]>a[i + 1]) {
//					int temp = a[i];
//					a[i] = a[i + 1];
//					a[i + 1] = temp;
//				}
//			}
//			else {
//				printf("YES\n");
//				output = 1;
//				break;
//			}
//		}
//		if (output != 1)
//			printf("NO\n");
//	}
//}