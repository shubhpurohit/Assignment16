#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],i,j,k,mult[3][3];
    printf("Enter matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter an array 2:\n");
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
            mult[i][j]=0;
            for(k=0;k<3;k++)
            {
                mult[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Multiplication of two matrix is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
