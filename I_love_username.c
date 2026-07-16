#include<stdio.h>
int main() {
	int n,amazing=0,max=0,min=0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (int i = 1;i < n;i++)
	{
		if (a[i] > max) {
			max = a[i];
			amazing++;
		}
		if (a[i] < min) {
			min = a[i];
			amazing++;
		}
	}
	printf("%d", amazing);
	return 0;
}