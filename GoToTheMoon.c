#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void displayArmstrong(int num);

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    displayArmstrong(num);

}
void displayArmstrong(int num)
{
    int i,temp=num,rem,count=0,sum=0;
    while(temp!=0)
    {
        temp/=10;
        count++;

    }
    temp=num;
    while(num!=0)
    {
        rem = num %10;
        sum = sum + pow(rem,count);
        num/=10;
    }
    (sum==temp)?printf("Armstrong"):printf("Not Armstrong");

}
