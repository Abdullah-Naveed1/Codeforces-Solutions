#include<stdio.h>

int logic(int n) {
	int sentinel=0;
	int j;
	for (j=n+1; sentinel == 0; j++) {
		int value = 1;
		for (int i = 2; i <= j / 2; i++) {
			if (j % i == 0) {
				value = 0;
				break;
			}
		}
		if (value == 1) {
			sentinel = 1;
			return j;
		}
	}
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (logic(n) == m)
		printf("YES");
	else
		printf("NO");
	return 0;
}