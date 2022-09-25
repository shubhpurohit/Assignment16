#include<stdio.h>
int main()
{
    int i,j,count=0;
    int m[3][3];

    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&m[i][j]);
            }
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",m[i][j]);
            }
            printf("\n");
        }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j]==0)
                count++;
        }
    }

    if(count>4) //  ((r*c)/2)
        printf("Matrix is sparse matrix ");
    else
        printf("Not sparse");
    return 0;

}
