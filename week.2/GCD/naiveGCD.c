
#include<stdio.h>


long long int naiveGCD(long long int a, long long int b)
{
    long int d;
    short int GCD= 1;

    for (d=2; d<=a && d<=b;d++)
    {
        if ((a%d==0) && (b%d==0))
                GCD = d;

    }
    return GCD;
}


void main()
{
    long long int a, b;
    scanf("%llu",&a);
    scanf("%llu",&b);
    long long int result = naiveGCD(a,b);
    printf("naive Algorithm %lu\n",result);
}
