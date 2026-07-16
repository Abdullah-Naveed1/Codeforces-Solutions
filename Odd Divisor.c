#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long int n,logN;
		scanf("%lld", &n);
		logN = log2(n);
		if (n == pow(2, logN))
			printf("NO\n");
		else {
			printf("YES\n");
		}
	}
}