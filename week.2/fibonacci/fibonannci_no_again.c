   #include<stdio.h>

unsigned long long int fib_huge_naive(unsigned long long int n, unsigned int m)
{
    if (n <=1)
    return n;
    else 
    {
       unsigned long long int i, f, f1=0, f2=1;
        for(i = 2; i <= n; i++)
        {               // swap elements
            f = f1+f2;
            f1 = f2;
            f2 = f;
        }
        return f % m ;
    }
}

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
      
    for (i = 2; i <= remainder; i++)
    {
        f = (f1+f2) % m;     
        f1 = f2;
        f2 = f;
    }
    return f;
}



void main()
{
    unsigned long long int n;
    unsigned int result, m;
    scanf("%llu",&n);
    scanf("%u",&m);
    result = fib_huge_fast(n, m);
    printf("%u\n",result);
    /* result = fib_huge_naive(n, m);
    printf("%d\n",result);*/   
       
}
