#include<stdio.h>
#include<math.h>

long long int max_ads_revenue( long long int price[],  long long int click[], int n)
{
    signed long long int max_revenue=0;
  //  signed int ptr1, ptr2, i;
    int i,j,swap;
    //sorting price array
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

//sorting click array
  for (i = 0 ; i < n - 1; i++)  //pass-1
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (click[j] > click[j+1]) /* For decreasing order use < */
      {
        swap       = click[j];
        click[j]   = click[j+1];
        click[j+1] = swap;
      }
    }
  }
  for (i=0;i<n;i++)
  {
      max_revenue += price[i]*click[i];
  }

    return max_revenue;
}



void main()
{
    int n, i;
    scanf("%d",&n);
    long long int price[n];
    long long int click[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&price[i]);
    }

    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&click[i]);
    }
    
    printf("%lld\n",max_ads_revenue(price, click, n));

}