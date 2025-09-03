//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		char s[n + 1];
//		scanf("%s", s);
//		if (n == 0) {
//			printf("0\n");
//			continue;
//		}
//		else if (n == 1) {
//			printf("1\n");
//			continue;
//		}
//		int start = 0, end = n - 1;
//		while (start < end) {
//			if (s[start] != s[end]) {
//				start++;
//				end--;
//			}
//			else {
//				break;
//			}
//		}
//		int count = end - start + 1;
//		printf("%d\n", count);
//	}
//}