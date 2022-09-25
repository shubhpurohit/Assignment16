#include<stdio.h>
int main()
{
    int i,j,arr[3][3],sumR[3],sumC[3];
    printf("Enter an matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        sumR[i]=0;
        for(j=0;j<3;j++)
        {
            sumR[i]+=arr[i][j];
        }
    }

      for(i=0;i<3;i++)
    {
        sumC[i]=0;
        for(j=0;j<3;j++)
        {
            sumC[i]+=arr[j][i];
        }
    }

    for(i=0;i<3;i++)
    {
        printf("row%d = %d\n",i+1,sumR[i]);
    }

     for(i=0;i<3;i++)
    {
        printf("column%d = %d\n",i+1,sumC[i]);
    }
return 0;


}
