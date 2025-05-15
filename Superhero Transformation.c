//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[1001], t[1001];
//	int len_s, len_t;
//	scanf("%s", s);
//	scanf("%s", t);
//	len_s = strlen(s);
//	len_t = strlen(t);
//	if (len_s != len_t) {
//		puts("No");
//		return 0;
//	}
//	for (int i = 0; i < len_s; i++)
//	{
//		if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'))
//			continue;
//		else if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') && (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u'))
//			continue;
//		else {
//			puts("No");
//			return 0;
//		}
//	}
//	puts("Yes");
//	return 0;
//}
