#include<stdio.h>
#include<stdlib.h>

int fibo(int num,int a,int b,int i);
int main()
{
    int num,a=1,b=1,i=1;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("%d",fibo(num,a,b,i));

}
int fibo(int num,int a,int b,int i)
{

    if(i<num)
    {
        printf("%d ",a);
        return fibo(num,b,a+b,++i);
    }
    else
    {
        return a;
    }
}
