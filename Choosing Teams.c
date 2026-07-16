#include<stdio.h>
int main() {
	int n, k,count=0;
	scanf("%d %d", &n, &k);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] + k <= 5)
			count++;
	}
	printf("%d", count / 3);
	return 0;
}