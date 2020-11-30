#include<stdio.h>


int binary_search( int arr[], int size, int key )
{
    int low=0, high = size-1;   // 0 1 2 3 4 5 6 7 8 9 10 11
    while ( low <= high )
    {
        int mid;
        mid = high - low;
        mid = ( low + mid / 2 );
        if (arr[mid] == key)
            return mid;  // return place of search number
        else if (arr[mid] < key) 
            low = mid + 1; 
        else
            high = mid - 1;
    }    
    return -1;    
}

int search(int arr[], int size, int key[], int size_k )
{
    for ( int i=0; i < size_k; i++ ){
       /* printf("size of k%d\n",size_k);
        printf("I is %d\n",i);*/
        printf( "%d ",binary_search( arr, size, key[i] ) );
    }
}


void main()  // 1 2 3 4 5 6
{
    int size, size_k;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&size_k);
    int key[size_k];
    for ( int i = 0; i < size_k; i++)
    {
        scanf("%d",&key[i]);
    }
    
  search( arr, size, key, size_k );

}