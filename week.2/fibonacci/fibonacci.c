#include<stdio.h>
#include<stdlib.h>


long long int fibonacci_fast(long long int n)
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
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}

long long int recfib(long long int n)
{
    if (n<=1)

    return n;
    else
    return recfib(n-1)+recfib(n-2);
}


long long int fuc_last_digit(long long int result1)
{
    int last_digit;
    last_digit= result1 % 10;
    return last_digit;
}



void main()
{
    /*while(1)
    {

    long long int n;

    n= (40000 + rand() % 40000);   //  start form + rand() % change rate

    printf("%lld\n",n);

  printf("\n");
  long long int result1= fibonacci_fast(n);
  printf("fast %lld\n",result1);
  long long int result2 = recfib(n);
  printf("rec %lld\n",result2);

  if (result1 != result2)
  {
    printf("Wrong Answer\n");
    break;
  }
  else
  {
    printf("ok\n");
  }
  }*/




    long long int i, n;
    scanf("%lld",&n);
    unsigned long long int result=fibonacci_fast(n);
    printf("fast solution is: %llu\n",result);
    int result2= recfib(n);
    printf("recusion loop result is :%lld\n",(long long int)result2);
    char last_digit = fuc_last_digit((long long int)result2);
    printf("last digit of fibonaccia is: %d",last_digit);
    
}
