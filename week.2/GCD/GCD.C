#include<stdio.h>
#include<stdlib.h>
//#include"Datatypes.h"




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

int main()
{
    long long int a, b;
    scanf("%llu",&a);
    scanf("%llu",&b);
    long long int result1 = naiveGCD(a,b);
    printf("naive Algorithm %lu\n",result1);
    long long int result2 = euclid(a,b);
    printf("Euclidean Algorithm :%lu\n",result2);


    /*while(1)
    {

    long long int a, b;

    a= (10000 + rand() % 10000);   //  start form + rand() % change rate
    b= (10000 + rand() % 10000);
    printf("%d\n",a);
    printf("%d\n",b);


  printf("\n");
  long long int result1= naiveGCD(a,b);
  printf("%d\n",result1) ;
  long long int result2 = euclid(a,b);
  printf("%d\n",result2);

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
}
