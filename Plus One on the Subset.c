#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		long long a[n],max=0,min = 10000000000;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &a[i]);
			if (a[i] > max) {
				max = a[i];
			}
			if (a[i] < min) {
				min = a[i];
			}
		}
		printf("%d\n", max - min);
	}
}