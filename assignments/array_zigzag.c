#include<stdio.h>
int tracker(int a);

int tracker(int a)
{
return a;
}
int main()
{
    int i,j,a;
    int arr[3][3];
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
        printf("Enter Value for column %d and row %d\n",i,j);
        scanf("%d",&arr[i][j]);
    }
    }
       for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
        printf("%d",arr[i][j]);
    }
    }
    printf("\n\n");
    printf("%d",arr[0][0]);
    for(i,j;arr[i][j]!=0;)
    {
      
    }
}