
#include<stdio.h>


unsigned long long int  fibonacci_fast(unsigned long long int  n)
{
    if (n<=1)
    {
        return n;
    }
    unsigned long long int  i, f1, f2, f;
    f1=0;
    f2=1;


    for(i=2;i<=n;i++)           // 0 1 1 2 3 5 8 13 21 34
    {   //temp=f1 %10              //0            8 3
        //f1=f2   %10              //1            3 1  
        //f2=temp+f1 %10          // 1            1 4

        f=(f1+f2);              
        f1=f2;              
        f2=f;               
    }
    return f;
}


unsigned long long int  fuc_last_digit(unsigned long long int  result)
{ 
    unsigned long long int  last_digit;
    last_digit= result % 10;
    return last_digit;
}



void main()
{
    unsigned long long int  n;
    scanf("%llu",&n);
    unsigned long long int  result = fibonacci_fast(n);
    printf("fibonacci No is: %llu\n",result);
    unsigned long long int  last_digit = fuc_last_digit(result);
    printf("last digit is: %llu",last_digit);
}