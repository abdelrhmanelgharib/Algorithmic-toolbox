#include<stdio.h>


long long int euclid(long long int a, long long int b)
{
    long int result;
    if (a > b)
    {
        while(b!=0)
        {
            result = a % b;
            a=b;
            b=result;
        }
         return a;
    }
    else
    {
        while(a!=0)
        {
            result = b % a;
            b=a;
            a=result;
        }
        return b;
    }
}

void main()
{
    long long int a, b;
    scanf("%llu",&a);
    scanf("%llu",&b);
    long long int result = euclid(a,b);
    printf("%llu\n",result);
}