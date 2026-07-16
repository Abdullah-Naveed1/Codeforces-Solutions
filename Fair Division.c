#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n,weight=0,count1=0,count2=0;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] == 1) {
				count1++;
				weight++;
			}
			else {
				count2++;
				weight += 2;
			}
		}
		if (weight % 2 == 1) {
			puts("NO");
		}
		else {
			int sum = weight / 2;
			if (sum % 2 == 0 || (sum%2==1&&count1!=0))
				puts("YES");
			else
				puts("NO");
		}
	}
}