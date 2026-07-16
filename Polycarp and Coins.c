#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int c1, c2;
		c1 = ceil((double)n / 3);
		c2 = floor((double)(n - c1) / 2);
		if ((c1 + 2 * c2) == n) {
			printf("%d %d\n", c1, c2);
			continue;
		}
		else {
			c2 = ceil((double)(n - c1) / 2);
			c1 = floor((double)n / 3);
			printf("%d %d\n", c1, c2);
			continue;
		}
	}
}