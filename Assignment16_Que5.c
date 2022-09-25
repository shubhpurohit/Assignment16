#include<stdio.h>

int main()
{
    int arr[3][3],i,j,sumLD=0;
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
            if(i+j==2)          //2 can be replaced by (size of matrix-1)
            {
                sumLD+=arr[i][j];
            }
        }
    }

    printf("%d",sumLD);

    return 0;
}

