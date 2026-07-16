#include<stdio.h>
int main() {
	int k, r,shovel=0,sentinel=1,money;
	scanf("%d %d", &k, &r);
	for (int i = 1; i <= 10; ++i) {
		int total = i * k;
		if (total % 10 == 0 || total % 10 == r) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}