#include<stdio.h>
//Write a program in C to print first 50 natural numbers using recursion.
void Natnum(int num,int i);

int main()
{
    int i=1,num;
    printf("Enter the number : ");
    scanf("%d",&num);

    Natnum(num,i);

}
void Natnum(int num,int i)
{
    if(i<=num)
    {
        printf("%d ",i);
        i++;
        Natnum(num,i);
    }
}
