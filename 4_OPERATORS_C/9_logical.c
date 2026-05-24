#include<stdio.h>
#include<stdbool.h>
int main()
{
     bool  isloggedin = true;
     bool  isadmin = false;

    printf("%d\n",(isloggedin && isadmin ));
    printf("%d",(isloggedin||isadmin));

    return 0;
}