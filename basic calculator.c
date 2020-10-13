#include <stdio.h>
int main()
{
    int a,b,result;
    char c;
    printf("\n Enter Your num-(+,-,*,/)-num:");
    scanf("%d %c %d",&a,&c,&b);
    switch(c)
    {
        case'+':
        result=a+b;
        break;
        case'-':
        result=a-b;
        break;
        case'*':
        result=a*b;
        break;
        case'/':
        result=a/b;
        break;
    }
    printf("\n result:%d",result);
    return 0;
}
