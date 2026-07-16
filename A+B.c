#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[4];
		scanf("%3s", s);
		int num1=s[0]-'0', num2=s[2]-'0';
		printf("%d\n", num1 + num2);
	}
}