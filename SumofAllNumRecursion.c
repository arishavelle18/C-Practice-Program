#include<stdio.h>
#include<stdlib.h>

int Sum(int num);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Total : %d",Sum(num));
}
int Sum(int num)
{
    if(num==1)
        return 1;
    else
        return num + Sum(num-1);
}
