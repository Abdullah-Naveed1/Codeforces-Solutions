#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int even[n/2],odd[n/2];
		if (n % 4 != 0) {
			puts("NO");
			continue;
		}
		puts("YES");
		int m=2,index_e=0,index_o=0;
		for (int i = 1; i <= n / 2; i++) {
			even[index_e++] = m;
			m += 2;
		}
		for (int i = 1; i <= n / 2; i++) {
			if (i<=n/4) {
				odd[index_o] = even[index_o] - 1;
				index_o++;
			}
			else {
				odd[index_o] = even[index_o] + 1;
				index_o++;
			}
		}
		index_e = 0;
		index_o = 0;
		for (int i = 1; i <= n / 2; i++) {
			printf("%d ", even[index_e++]);
		}
		for (int i = 1; i <= n / 2; i++) {
			printf("%d ", odd[index_o++]);
		}
		puts("");
	}
}