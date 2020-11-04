#include <stdio.h>
int main()
{
    int password, att=1;
    
    while(att!=0)
    {
    printf("\n enter the password here: ");
    scanf("%d",&password);
    
        if (password==6945)
        {
            printf("\n the password is right");
            att=0;
        }
          else
          {
              printf("\n the password is incorrect");
              att++;
          }
          
    }
    return 0;
}