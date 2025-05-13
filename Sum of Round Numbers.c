//#include <stdio.h>
//
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while (t--)
//    {
//        int n;
//        scanf("%d", &n);
//
//        int a[10], count_sol = 0;
//        int place = 0;
//
//        while (n > 0)
//        {
//            int dig = n % 10;
//            if (dig != 0)
//            {
//                int round_number = dig;
//                for (int i = 0; i < place; i++)
//                    round_number *= 10;
//                a[count_sol++] = round_number;
//            }
//            n /= 10;
//            place++;
//        }
//
//        printf("%d\n", count_sol);
//        for (int i = 0; i < count_sol; i++)
//        {
//            printf("%d ", a[i]);
//        }
//        puts("");
//    }
//    return 0;
//}
