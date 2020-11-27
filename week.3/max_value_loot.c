#include<stdio.h>

int max_num_Knapsack(int price[], int weight[], int size )
{
    int i;
    double max=0 ;
    int index;
    for (i=0;i<size;i++)
    {
        if ( ( weight[i] !=0 ) && ((double)price[i] / weight[i] > max ) )
        {   
            max =(double) price[i] / weight[i];
            index = i;
        }
    }
    return index;
}


int min_value_(int weight, int capacity )
{
    if (weight < capacity )
        return weight;
    else
        return capacity;
}

double max_price_loot( int price[], int weight[], int capacity, int size)
{
    int i, index;
    double value =0;
    int min_value;
    if ( capacity == 0 )
    return 0;
    else
    {
        for (i=0;i<size;i++)
        {  
            index = max_num_Knapsack( price, weight, size );
            printf("index is %d\n",index);
            min_value = min_value_( weight[index], capacity );
            value += min_value * (double)price[index] / weight[index];
            weight[index] -= min_value;
            capacity -= min_value;
        } 
    return value;  
    } 
}


void main()
{

    int size, i, capacity;
    scanf("%d",&size);
    scanf("%d",&capacity);
    int price[size];
    int weight[size];

    for (i=0;i<size;i++)
    {
        scanf("%d",&price[i]);
        scanf("%d",&weight[i]);
    }
    printf("%0.4lf",max_price_loot(price, weight, capacity, size));


}