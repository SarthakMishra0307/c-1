#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int A[10][10];
    int i,j,n,result;
    printf("Enter the order of the matrix:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Column %i \n", i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[j][i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("| ");
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("| \n");
    }
}