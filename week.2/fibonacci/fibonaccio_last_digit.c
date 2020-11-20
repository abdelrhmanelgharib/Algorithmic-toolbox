#include<stdio.h>



char fibonacci_last_digit_fast(long long int n)
{
    if (n<=1)
    {
        return n;
    }
    int i, f1, f2, f;
    f1=0;
    f2=1;


    for(i=2;i<=n;i++)
    {
        f=(f1+f2)%10;
        f1=f2 %10;
        f2=f%10;
    }
    return f;
}



/*
long long int fuc_last_digit(long long int result1)
{
    int last_digit;
    last_digit= result1 % 10;
    return last_digit;
}*/


void main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    char result1 = fibonacci_last_digit_fast(n);
    printf("last digit of fibonacci is: %d\n",result1);
    
   /* char last_digit = fuc_last_digit((long long int)result1);
    printf("%d",last_digit);*/

}