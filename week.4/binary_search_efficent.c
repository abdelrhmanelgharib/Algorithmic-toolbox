#include<stdio.h>


int binary_search( int arr[], int low, int high, int key )
{
    while ( low <= high )
    {
        int mid;
        mid = high - low; // 2-1    1-1
        mid = ( low + mid/2 );  // 3  1
        if (key == arr[mid])
        {
            return mid;  // return place of search number
        }
        else if (key < arr[mid]) // 1
        {
            high = mid - 1; // 2 1
        }
        else
        {
            low = mid + 1;
        }
    }    
    return -1;    
   
}


void main()  // 1 2 3 4 5 6
{
    int size, i, low, high, key;
    scanf("%d",&size);
    int arr[size];
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    low = 0;
    high = size -1 ;
    scanf("%d",&key);
    printf( "%d",binary_search( arr, low, high, key ));

}