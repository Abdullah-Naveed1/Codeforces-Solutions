//#include<stdio.h>
//#include<string.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		char s[101];
//		scanf("%100s", s);
//		int len = strlen(s);
//		if (len % 2 == 1) {
//			printf("NO\n");
//			continue;
//		}
//		char firstHalf[len / 2+1],secondHalf[len/2+1];
//
//		int index1 = 0,index2=0,orig_index=0;
//
//		for (int i = 1; i <= len; i++) {
//			if (i <= len / 2)
//				firstHalf[index1++] = s[orig_index++];
//			else
//				secondHalf[index2++] = s[orig_index++];
//		}
//		firstHalf[index1] = '\0';
//		secondHalf[index2] = '\0';
//		if (strcmp(firstHalf, secondHalf) == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//}