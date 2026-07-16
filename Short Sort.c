#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char a[4];
		scanf("%3s", a);
		if (strcmp(a, "abc")==0 || strcmp(a, "bac")==0 || strcmp(a, "acb")==0 || strcmp(a, "cba")==0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}