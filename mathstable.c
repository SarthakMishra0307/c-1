#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("\nenter the number which table you want:  ");
    scanf("%d",&a);
    for(b=1;b<=20;b++)
    {
          
        printf("\n %d * %d = %d",a,b,a*b);   
    }
    return 0;
}