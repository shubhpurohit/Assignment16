#include<stdio.h>
int main()
{
    int i,j,count;
    int m[3][3],arr[3];

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
                printf(" %d",m[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<3;i++)
        {   count=0;
            for(j=0;j<3;j++)
            {
                if(m[i][j]==1)
                    count++;

            }
            arr[i]=count;
        }


        for(i=0;i<3;i++)
            {if(arr[0]<arr[i])
                arr[0]=i+1;
            }


            printf("row%d has max number of elements.",arr[0]);
            return 0;

}
