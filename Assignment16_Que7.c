#include<stdio.h>
int main()
{
    int i,j,m[3][3];
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
            if(i>j||i==j)
                printf("%d",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
