#include<stdio.h>



long long int min_gas( long long int gas_station[],long long int no_gas_stat, long long int car_dist, long long int home_dist )
{
    
    if ( (home_dist - gas_station[no_gas_stat -1] <= car_dist) && (gas_station[0]-0 <= car_dist) ) 
    {
        
        if (home_dist > car_dist)
        {
    long long int no_rfils=0, curnt_rfils=0, last_rfils;

    while( curnt_rfils < no_gas_stat -1)
    {
    last_rfils = curnt_rfils;

    while (( curnt_rfils < no_gas_stat && (gas_station[curnt_rfils + 1] - gas_station[last_rfils]) <= car_dist ))  
    {
        curnt_rfils++;
    }
    if ( curnt_rfils == last_rfils )
    {
        return -1;
    }
    else if ( curnt_rfils <= no_gas_stat )
    {
        no_rfils++;
    }
    }
    return no_rfils;
    }
        
    else
    {
        return 0;
    }
    
    }
    else
    {
        return -1;
    }
}




long long int main()
{ 

    long long int home_dist, i;
    long long int no_rfils=0, curnt_rfils=0, last_rfils, car_dist;

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