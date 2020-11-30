#include<stdio.h>


int binary_search( int arr[] , int low, int high, int key)
{
    int mid;
    mid = high - low;
    mid = ( low + mid / 2 );
    if ( high < low )
    {
        return low -1;
    }
    if ( key == arr[mid] )
    return mid + 1;               // return place of search number;
    else if ( key < arr[mid] )
    {
        return binary_search( arr, low, mid-1, key);
    }
    else
    {
        return binary_search( arr , mid+1, high, key );
    }   
}


void main()  // 1 2 3 4 5 6
{
    int size, i, low, high, key, mid, sub;
    scanf("%d",&size);
    int arr[size];
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    low = 1;
    high = size ;
    scanf("%d",&key);
    printf( "%d",binary_search( arr, low, high, key ));

}
