#include<stdio.h>

int main()
{
    int num,i,j,temp,add=1;
    scanf("%d",&num);
    temp = num-1;
    num+=temp;
    temp = num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==add || i==temp)
            {
                printf("2");
            }
            else if(i==temp-1 &&j==temp-1)
            {
                printf("1");
            }
            else
            {
                printf("2");
            }

        }
     printf("\n");
    }

}
