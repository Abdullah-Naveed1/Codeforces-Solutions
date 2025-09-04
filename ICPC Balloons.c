//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, seen[26] = { 0 },count=0;
//		scanf("%d", &n);
//		count += n;
//		char s[n+1];
//		scanf("%s", s);
//		for (int i = 0; i < n; i++) {
//			if (seen[s[i] - 'A'] == 0) {
//				count++;
//				seen[s[i] - 'A'] = 1;
//			}
//		}
//		printf("%d\n", count);
//	}
//}