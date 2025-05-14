//#include<stdio.h>
//int min(int, int, int);
//int main() {
//	int n, k, l, c, d, p, nl, np,total_milileters,total_slices,toasts=0,ml,limes,salt;
//	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
//	total_milileters = k * l;
//	total_slices = c * d;
//	ml = total_milileters / nl;
//	limes = total_slices / 1;
//	salt = p / np;
//	ml /= n;
//	limes /= n;
//	salt /= n;
//	toasts = min(ml, limes, salt);
//	printf("%d", toasts);
//	return 0;
//}
//int min(int a, int b, int c) {
//	if (a <= b && a <= c)
//		return a;
//	else if (b <= c)
//		return b;
//	else
//		return c;
//}