#include<stdio.h>


long long int recfib(long long int n)
{
    if (n<=1)

    return n;
    else
    return recfib(n-1)+recfib(n-2);
}


void main()
{
    int i, n;
    scanf("%d",&n);
    int result2= recfib(n);
    printf("%lld\n",(long long int)result2);
}