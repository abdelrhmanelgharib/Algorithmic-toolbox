#include<stdio.h>

/*

void fibonacci_last_digit_fast(long long int n, int* ptr)
{
    int f1=0, f2=1, f,sum=1;
    long long int i;
    if (n<=1)
    {
        *ptr = n;
    }
    
    else{

    for(i=0;i<n-1;i++)   // 0 1 1 2 3 5
    {                     //n= 3    1  1
        f=(f1+f2)%10;     //f=    1 2 3 4  6  0
        f1=f2%10 ;       //f1=    1 1 2 2  4  
        f2=f%10;         //f2=    1 2 2 4  6
        sum=(sum+f)%10; //sum=       2 4 7 11 17
    }
    *ptr = sum;
   
}
}*/

unsigned long long int pisano_length(unsigned int m)
{
    unsigned int i, f, f1=0, f2=1;
    for (i = 0; i < m*m; i++)
    {                          //for mod 2
        f = (f1+f2) % m;      //1 0 1 1 
        f1 = f2;             // 1 1 0 1 
        f2 = f;             //  1 0 1 1 
        if (f1==0 && f2==1)
        return i+1;
    }
    return i;
}
long long int fib_huge_fast(long long int n, unsigned int m)
{    
    int remainder = n % pisano_length(m);
    unsigned int i, f= remainder, f1=0, f2=1;
    int sum =0;
    if (n<=1)
    return n;
    else
    {    
    for (i = 2; i <= remainder;i++)
    {
        f = (f1+f2)%10;    
        f1 = f2 %10 ;
        f2 = f %10;
        sum=sum+f %10;
    }
    return (sum+1) %10;
    }
}




void main()
{
    unsigned long long int n;
    int m=10;
    scanf("%llu",&n);
    int result =fib_huge_fast(n,m);
    printf("%d",result);
}