#include<stdio.h>
#include<stdlib.h>
int NaturalNum(int n,int i,int gap);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i=1;
    int gap = 11;
    printf("%d ",NaturalNum(n,i,gap));

}
int NaturalNum(int n,int i,int gap)
{
    if(i == n)
        return n;
    else
    {
        printf("%d ",i);
        i++;
        if(i==gap)
        {
            printf("\n");
            gap+=10;
        }
        NaturalNum(n,i,gap);
    }
}
