//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n, m, a, b;
//	float priceMulti;
//	scanf("%d%d%d%d", &n, &m, &a, &b);
//	priceMulti = (float)b / m;
//	if ((float)a <= priceMulti) {
//		printf("%d", n * a);
//		return 0;
//	}
//	int rem = n % m;
//	float costWithMulti = (n - rem) / m * b;
//	float total = costWithMulti + (a * rem);
//	int onlyMulti = ceil((float)n / m) * b;
//	if (total <= onlyMulti){
//		printf("%.0f", total);
//		return 0;
//	}
//	else{
//		printf("%d", onlyMulti);
//		return 0;
//	}
//	return 0;
//}