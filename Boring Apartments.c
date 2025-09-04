//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int x,countDig=0,count=0,dig,sentinel=1;
//		scanf("%d", &x);
//		while (x>0) {
//			dig = x % 10;
//			x /= 10;
//			countDig++;
//			if (sentinel == 1) {
//				count += (dig-1) * 10;
//				sentinel = 0;
//			}
//		}
//		if (countDig == 1)
//			count++;
//		else if (countDig == 2)
//			count += 3;
//		else if (countDig == 3)
//			count += 6;
//		else if (countDig == 4) {
//			count += 10;
//		}
//		printf("%d\n", count);
//	}
//}