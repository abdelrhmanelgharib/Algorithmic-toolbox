#include<stdio.h>
#include<math.h>

int sort( int price[], int n )
{
  int i, j, swap;
  for (i = 0 ; i < n - 1; i++)  //pass-1
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (price[j] > price[j+1]) /* For decreasing order use < */
      {
        swap       = price[j];
        price[j]   = price[j+1];
        price[j+1] = swap;
      }
    }
  }

  return ;
}





void max_price_click(signed int price[], signed int click[], signed int n, signed int* ptr1, signed int* ptr2)
{
    signed int i, j;
    signed int index1 = -1;
    for( i=0; i<n; i++ )
    { 
        if ((index1 == -1) || ( price[i] > price[index1] ))
        {
        index1 = i;
        * ptr1 = index1;
        printf("######### prince pt1 %d\n",*ptr1);
        }
    }
        
    signed int index2=-1;
    for ( j=0; j<n; j++)
    {
        if ((index2 == -1) || ( click[j] > click[index2] ))
        {
        index2 = j;
        * ptr2 = index2;
        printf("########### click ptr2 %d\n",*ptr2);
        }
    }
           

}


long long int max_ads_revenue(signed int prince[], signed int click[], int n)
{
    int index;
    signed int max_revenue=0;
    signed int ptr1, ptr2, i;
    for(i=0; i<n; i++)
    {
    max_price_click(prince,click,n, &ptr1, &ptr2);  



    printf("ptr1 is %d\n",ptr1);
    printf("ptr2 is %d\n",ptr2);
    printf("value of pr is %d\n",prince[ptr1]);
    printf("value of cli is %d\n",click[ptr2]);




    max_revenue += prince[ptr1] * click[ptr2];   //100  
   // min_value = min_value_(prince[ptr1], )
    printf("max re is %d\n",max_revenue);
    prince[ptr1] -= prince[ptr1];
    click[ptr2]  -= click[ptr2];
    }
    return max_revenue;
}



void main()
{
    int n, i;
    scanf("%d",&n);
    int price[n];
    int click[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&click[i]);
    }
    
    printf("%lld\n",max_ads_revenue(price, click, n));

}