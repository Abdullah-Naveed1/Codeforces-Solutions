#include<stdio.h>
int polycarp(int a) {
	int i=1,count=0;
	for (;1;) {
		if (i % 3 != 0 && i % 10 != 3) {
			count++;
			if (count == a)
				return i;
		}
		i++;
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int k;
		scanf("%d", &k);
		int result = polycarp(k);
		printf("%d\n",result);
	}
}
