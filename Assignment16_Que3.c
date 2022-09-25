#include<stdio.h>
int main()
{
    int i,j,arr[3][3],temp;
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
            for(j=0;j<3;j++)
            {
                if(i>j)
                {
                   temp=arr[i][j];
                   arr[i][j]=arr[j][i];
                   arr[j][i]=temp;
                }
            }
        }
        printf("Transpose is: \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

        return 0;

}
