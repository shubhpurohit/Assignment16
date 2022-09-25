#include<stdio.h>

int main()
{
    int arr[3][3],i,j,sumRD=0;
    printf("Enter the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sumRD+=arr[i][j];
            }
        }
    }

    printf("%d",sumRD);

    return 0;
}

