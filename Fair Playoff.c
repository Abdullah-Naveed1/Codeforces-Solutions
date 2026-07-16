#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a[4],max=0,max2nd=0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &a[i]);
			if (a[i] > max) {
				max2nd = max;
				max = a[i];
			}
			else if (a[i] > max2nd) {
				max2nd = a[i];
			}
		}
		int finalist1, finalist2;
		if (a[0] > a[1]) {
			finalist1 = a[0];
		}
		else {
			finalist1 = a[1];
		}
		if (a[2] > a[3]) {
			finalist2 = a[2];
		}
		else {
			finalist2 = a[3];
		}
		if ((finalist1 == max && finalist2 == max2nd) || (finalist1 == max2nd && finalist2 == max))
			puts("YES");
		else
			puts("NO");
	}
}