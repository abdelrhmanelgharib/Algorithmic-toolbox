#include<stdio.h>
#include<stdlib.h>

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


long long int maxnum_pairwise(int arr[], int n)
{
    int i, j;
    int index1=-1;  

    for (i=0;i<n;i++)
    {
        if ((index1==-1) || (arr[i] > arr[index1]))              //20 60 50 80 10
        index1=i;
    }
    int index2=-1;
    for (j=0;j<n;j++)
    {
        if ((j !=index1) && ((index2==-1) || (arr[j] > arr[index2])))
        index2=j;
    }
    
    return (long long int) arr[index1] * arr[index2];
}


void main()
{
    int size, i;
    printf("Enter NO Of Element\n");
    scanf("%d",&size);
    unsigned int arr[size];
    unsigned long long int result;
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    result= maxnum_pairwise(arr,size);
    printf("max pairwise efficient is: %lld\n",result);
    result= maxnum_pairwise_product(arr,size);
    printf("max pairwise naive is:%lld\n",result);



   /* while(1)
    {   

    int n, i;

    n= (2 + rand() % 10) ;
     int arr[n];
    printf("%d\n",n);
  for(i=0;i<n;i++)
  {
    arr[i]=10000+rand() % 100 ;    // start form + rand() % change rate
    printf("%d ",arr[i]);
  }
  printf("\n");
  long long int result1 = maxnum_pairwise_product(arr,n);
  long long int result2 = maxnum_pairwise(arr,n);
  printf("--------------------------------------------\n");
  printf("%d\n",result1);
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
