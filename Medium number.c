#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a[3];
		scanf("%d%d%d", &a[0],&a[1],&a[2]);
		int max = a[0];
		int min = a[0];
		for (int i = 1;i < 3;i++) {
			if (a[i] > max)
				max = a[i];
			if (a[i] < min)
				min = a[i];
		}
		for (int i = 0;i < 3;i++) {
			if (a[i] != max && a[i] != min) {
				printf("%d\n", a[i]);
			}
		}
	}
	return 0;
}