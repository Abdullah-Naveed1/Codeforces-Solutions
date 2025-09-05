//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, freq[26] = { 0 };
//		scanf("%d", &n);
//		char s[n + 1];
//		scanf("%s", s);
//		for (int i = 0; i<n; i++) {
//			if (s[i] != s[i + 1]) {
//				freq[s[i] - 'A']++;
//			}
//		}
//		int yes = 1;
//		for (int i = 0; i < 26; i++) {
//			if (freq[i] > 1) {
//				printf("NO\n");
//				yes = 0;
//				break;
//			}
//		}
//		if(yes==1)
//			printf("YES\n");
//		continue;
//	}
//}