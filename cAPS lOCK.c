#include<stdio.h>
#include<string.h>
#include<ctype.h>
int logic(char* s) {
	int upper=0,lower=0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			upper++;
		}
		else {
			lower++;
		}
	}
	if (strlen(s) == upper) {
		return 0;
	}
	else if (upper == strlen(s)-1) {
		return 1;
	}
	else if (upper == 1) {
		return 2;
	}
	else if (lower == strlen(s)) {
		return 3;
	}
}
int main() {
	char a[101];
	scanf("%100s", a);
	if (logic(a) == 0) {
		for (int i = 0; a[i] != '\0'; i++) {
			a[i] = tolower(a[i]);
		}
		printf("%s", a);
		return 0;
	}
	else if (logic(a) == 1 && islower(a[0])) {
		for (int i = 1; a[i] != '\0'; i++) {
			a[i] = tolower(a[i]);
		}
		a[0] = toupper(a[0]);
			printf("%s", a);
			return 0;
	}
	else {
		printf("%s", a);
		return 0;
	}
}