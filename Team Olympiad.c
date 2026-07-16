#include<stdio.h>
int main() {
	int n,count1=0,count2=0,count3=0;
	scanf("%d", &n);
	int index1[n], index2[n], index3[n];
	int a[n];
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		if (a[i] == 1)
			index1[count1++]=i+1;
		else if (a[i] == 2)
			index2[count2++]=i+1;
		else if (a[i] == 3)
			index3[count3++]=i+1;
	}
	int min = count1;
	if (count2 < min)
		min = count2;
	if (count3 < min)
		min = count3;
	printf("%d\n", min);
	for (int i = 0;i < min;i++) {
		printf("%d %d %d\n", index1[i], index2[i], index3[i]);
	}
}