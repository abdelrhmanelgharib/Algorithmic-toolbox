#include<stdio.h>



long long int min_gas( long long int gas_station[],long long int no_gas_stat, long long int car_dist, long long int home_dist )
{
    long long int no_rfils=0, count=0;
    long long int m= car_dist; 
    while (car_dist < home_dist)
    {
        if (( count >= no_gas_stat) || (gas_station[count] > car_dist))
        {
        return -1;
        }
        while ( (count < no_gas_stat-1) && (gas_station[count+1] <= car_dist ))   
        {
            count++;
        }
        no_rfils++;
        car_dist = gas_station[count] + m; 
        count++;
    }
    return no_rfils;
}


int main()
{ 

    long long int home_dist, i;
    long long int car_dist;

    scanf("%lld",&home_dist);
    scanf("%lld",&car_dist);
    long long int no_gas_stat;
    scanf("%lld",&no_gas_stat);   // read no of gas station on my way
    long long int gas_station[no_gas_stat];
    if ((home_dist >= 1 && home_dist <= 10^5) && ( car_dist >= 1 && car_dist <= 400) && (no_gas_stat >= 1 && no_gas_stat <= 300 )  && (no_gas_stat < home_dist) ) ;
    {
    for ( i=0; i < no_gas_stat; i++)
    {
        scanf("%lld",&gas_station[i]);
    }
    printf("%lld",min_gas(gas_station, no_gas_stat, car_dist, home_dist));
    }   
 
return 0;
    
}    