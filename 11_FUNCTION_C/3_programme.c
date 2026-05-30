#include<stdio.h>
void myfunction(char name[])
{
    printf("hello %s\n",name);
}
int main()
{
    myfunction("liam");
    myfunction("jenny");
    myfunction("anja");

    return 0;
}