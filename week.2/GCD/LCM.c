#include<stdio.h>
#include<math.h>


unsigned long long int euclid(unsigned long long int a, unsigned long long int b)
{
    long long int result;
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


unsigned long long int lcm(unsigned long long int a, unsigned long long int b)
{
    return (a*b)/euclid(a, b);
}

void main()
{
    unsigned long long int a, b;
    scanf("%llu",&a);
    scanf("%llu",&b);
    printf("%llu",lcm(a, b));

}