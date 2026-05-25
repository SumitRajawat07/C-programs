#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool isloggedin = true;
    bool isadmin = false;
    int securitylevel = 3;

    if(isloggedin&&(isadmin||securitylevel<=2))
    {
        
    }
    else
    {
        printf("acess denied");
    }

}