#include<stdio.h>
int main()
{
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items*cost_per_item;
    char currency = '$';

    printf("number of items : %d\n",items);
    printf("cost per item : %.2f\n",cost_per_item,currency);// here using is decimal precision using with float
    printf("total cost: %.2f",total_cost,currency); // here using another using decimal precision with float

    return 0;
    
}