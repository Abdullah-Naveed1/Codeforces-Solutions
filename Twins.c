#include<stdio.h>
int main()
{
   float half;
   int n, total = 0,sum=0,count=0;
   scanf("%d", &n);
   int coins[n];
   for (int i = 0;i < n;i++)
   {
       scanf("%d", &coins[i]);
       total += coins[i];
   }
   for (int i = 0;i < n;i++)
   {
       for (int j = i + 1;j < n;j++)
       {
           if (coins[i] < coins[j])
           {
               int temp = coins[i];
               coins[i] = coins[j];
               coins[j] = temp;
           }
       }
   }
   half = (float)total / 2;
   for (int i = 0;i < n;i++)
   {
       sum += coins[i];
       count++;
       if (sum > half)
       {
			printf("%d", count);
           return 0;
       }
   }
}