#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n],min=10000000;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] < min) {
				min = a[i];
			}
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i] - min;
		}
		printf("%d\n", sum);
	}
}