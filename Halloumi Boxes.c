#include<stdio.h>
int isSorted(int a[], int size) {
	for (int i = 0;i < size - 1;i++) {
		if (a[i] > a[i + 1])
			return 0;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		int a[n];
		for (int i = 0;i < n;i++) {
			scanf("%d", &a[i]);
		}
		if (k == 1) {
			if (isSorted(a, n))
				printf("YES\n");
			else 
				printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}
	return 0;
}