#include <stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter first number here");
	scanf("%d",&a);
	printf("\n enter second number here");
	scanf("%d",&b);
	printf("\n enter third number here");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("\n %d is the highest number",a);
    if(b>a && b>c)
	printf("\n %d is the highest number",b);

    if(c>a && c>b)
	printf("\n %d is the highest number",c);
    else if (a==b && b==c && a==c)
	printf("\n all numbers are equal");
	else if (a==b && a>c)
        printf("\n %d is the highest number",a);
    else if(b==c && b>a)
        printf("\n %d is the highest number",b);
    else if(c==a && c>b)
        printf("\n %d is the highest number",c);
	return 0;

}
