#include<stdio.h>
int main()
{
	int n,sereja=0,dima=0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	int left = 0, right = n-1;
	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0) {
			if (a[left] >= a[right])
			{
				sereja += a[left];
				left++;
			}
			else
			{
				sereja += a[right];
				right--;
			}
		}
		else if(i%2==1){
			if (a[left] >= a[right])
			{
				dima += a[left];
				left++;
			}
			else
			{
				dima += a[right];
				right--;
			}
		}
	}
	printf("%d %d", sereja, dima);
	return 0;
}