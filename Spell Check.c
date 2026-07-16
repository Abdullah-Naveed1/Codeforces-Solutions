#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		char s[n + 1];
		scanf("%s", s);
		if (n != 5) {
			printf("NO\n");
			continue;
		}
		int freq[256] = { 0 };
		for (int i = 0; i < 5; i++) {
			freq[(int)s[i]] = 1;
		}
		if (freq[(int)'T'] == 1 && freq[(int)'i'] == 1 && freq[(int)'m'] == 1 && freq[(int)'u'] == 1 && freq[(int)'r'] == 1)
			puts("YES");
		else
			puts("NO");
	}
}