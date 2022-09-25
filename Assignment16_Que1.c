#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
   printf("Enter matrix 1");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter matrix 2");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

printf("Sum of the matrices are: \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr3[i][i]);
        }
        printf("\n");
    }

    return 0;
}
