#include<stdio.h>
int main()
{
    int time = 20;
    
    if(time<18)
    {
        printf("good morning");
    }
    else if (time<19)
    {
        printf("good afternoon");
    }
    else 
    {
        printf("good night");
    }

    return 0;
}