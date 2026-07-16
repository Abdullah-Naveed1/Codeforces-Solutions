#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k,exists=0;
		scanf("%d%d", &n, &k);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] == k)
				exists = 1;
		}
		if (exists == 1)
			puts("YES");
		else
			puts("NO");
	}
}