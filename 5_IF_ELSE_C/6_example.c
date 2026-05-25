// checking person old enough to vote 

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age = 18;
    bool iscitizen = true;

    if(age>=18)
  {
        printf("old enough to vote\n ");
    
    if(iscitizen)
    {
        printf("and you are a citizen ,so you can vote\n");
    }
  
  
     else
    {
     printf("but you must be a citizen to vote\n ");
    }
  
  }  

    else
    {
        printf("not old enough to vote\n");
    }  

  
  return 0;

  


    
}