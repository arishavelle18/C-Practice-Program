#include<stdio.h>
#include<stdlib.h>

///Write a program in C to display the n terms of square natural number and their sum.

void DisplayPerfectSquareTotal(int);

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    DisplayPerfectSquareTotal(num);
}
void DisplayPerfectSquareTotal(int num)
{
    int i,sum=0;

    for(i=1;i<=num;i++)
    {
        sum=sum + i*i;
    }
    printf("Total : %d ",sum);

}

