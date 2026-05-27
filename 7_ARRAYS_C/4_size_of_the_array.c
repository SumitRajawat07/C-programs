#include<stdio.h>
int main()
{
    int mynum[] = {10,20,30,40};
    int length = (sizeof(mynum) / sizeof(mynum[0]));
    printf("%d",length);
}