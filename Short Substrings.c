#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[201];
		scanf("%200s", s);
		int length = strlen(s);
		for (int i = 0; i < length; i++) {
			if ((i % 2 == 0) || (i == length - 1)) {
				printf("%c", s[i]);
			}
		}
		puts("");
	}
	return 0;
}