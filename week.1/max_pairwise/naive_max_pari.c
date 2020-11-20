#include<stdio.h>

long long int maxnum_pairwise_product(int arr[], int size)
{
    int i, j;
     long long int result = 0;
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)         // 2 3 1 9
        {
            if (arr[i] * arr[j]> result)
            {
                result=(long long int) arr[i] * arr[j];
            }

        }
    }
    return result;
}


void main()
{
    int size, i;
    scanf("%d",&size);
    unsigned int arr[size];
    unsigned long long int result;
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    result= maxnum_pairwise_product(arr,size);
    printf("%lld",result);
    
}