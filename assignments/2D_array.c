#include <stdio.h>
int main()
{
 int matrix[2][2]={{2,3,},{5,7}};
 printf("\nResultant\n");
 for(int i=0;i<2;i++)
 {
    for(int j=0;j<2;j++)
    {
        printf("%d",matrix[i][j]);
    }
    printf("\n");
}
}
