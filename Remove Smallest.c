#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n,sentinel = 1;
		scanf("%d", &n);
		int a[n];
		for (int i = 0;i < n;i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0;i < n;i++) {
			for (int j = i + 1;j < n;j++) {
				if (a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for (int i = 0;i < n;i++) {
			int absolute = abs(a[i] - a[i + 1]);
			if(absolute > 1&&i+1<n){
				printf("NO\n");
				sentinel = 0;
				break;
			}
		}
		if (sentinel != 0) {
			printf("YES\n");
		}
	}
}