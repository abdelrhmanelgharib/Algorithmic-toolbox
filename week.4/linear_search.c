#include<stdio.h>



int linear_search( int arr[] , int low, int high, int key )
{
    if ( high < low )
    {
        printf("Not Found\n");  // O(1)
    }
    else if ( key == arr[low] )
    {
        return arr[low]; //O(n)
    }
    return linear_search( arr, low+1, high, key);  //O(n)  
}



void main()
{
    int size, i, low, high, key;
    scanf("%d",&size);
    int arr[size];
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    low = arr[0];
    high = arr[size -1];
    scanf("%d",&key);
    printf( "%d",linear_search( arr, low, high, key ));

}
