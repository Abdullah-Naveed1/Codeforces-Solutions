#include<stdio.h>
int main() {
	int n=0,count1=1,count2=1,j;
	scanf("%d", &n);
	int a[n];
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0;i < n;i++) {
		if (a[i] <= a[i+1] && (i+1)<=n-1) {
			count1++;
		}
		else {
			count1 = 1;
		}
		if (count1 > count2)
			count2 = count1;
	}
	printf("%d", count2);
}