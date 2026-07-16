#include<stdio.h>
#include<string.h>
int main() {
	int count1 = 0, count2 = 0;
	int n;
	scanf("%d", &n);
	char s[11],team1[11],team2[11];
	for (int i = 0; i < n; i++) {
		scanf("%10s", s);
		if (i == 0) {
			strcpy(team1, s);
			count1++;
		}
		if (strcmp(s, team1) != 0) {
			strcpy(team2, s);
			count2++;
		}
		else
			count1++;
	}
	if (count1 > count2)
		printf("%s", team1);
	else
		printf("%s", team2);
	return 0;
}