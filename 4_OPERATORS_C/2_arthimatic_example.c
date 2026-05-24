#include<stdio.h>
int main()
{
    int peopleinroom = 0;
    peopleinroom++;
    peopleinroom++;
    peopleinroom++;

    printf("people in room %d\n",peopleinroom);

    peopleinroom--;
    printf("one leave in room then people in room %d",peopleinroom);

    return 0;
}