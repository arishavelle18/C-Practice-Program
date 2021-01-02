#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
   A
  AAA
 AAAAA
AAAAAAA
  AAA
 AAAAA
AAAAAAA
 AAAAA
AAAAAAA
  AAA
  AAA
  AAA
*/
void DisplayTheTree(int row,int col,int k,int num,int flag);
void intro();
int main()
{
    int num;
    printf("Enter the number (even) : ");
    scanf("%d",&num);
    system("cls");
    if(num%2==0)
    {
        while(1)
        {
            int row=1,col=1,k=1,flag=1,counter=1,a=219;
            DisplayTheTree(row,col,k,num,flag);
            for(row=1;row<=num/2;row++)
            {system("color 0F");
                for(col=1;col<=num/2;col++) /// for space
                {
                    printf(" ");
                }
                for(k=1;k<=2*(num/2)-1;k++)   /// for stand
                {
                    printf("%c",a);
                }
              printf("\n");
            }

         intro();
         system("cls");
        }
    }
    else
    {
        return 0;
    }
}
void intro()
{
    system("cls");
    int ctr=1,i;
    char a=219;
    while(ctr!=50)
    {  system("Color 0F");
        if(ctr%11!=0)
        {
        printf("Merry Christmas!!! ");
        ctr++;
        }
        else if(ctr%11==0)
        {
            printf("Merry Christmas!!! \n");
            ctr++;
        }
    }
}
void DisplayTheTree(int row,int col,int k,int num,int flag)
{   system("color 0F");
    char a=219;
    if(flag==4)
    {
        return;
    }
    else
    {
    for(row;row<=num;row++)
    {system("color 0F");
        for(col=row;col<num;col++)    /// for space
        {
            printf(" ");
        }
        for(k=1;k<=2*row-1;k++) /// for odd number of pyramid
        {
            printf("%c",a);
        }
     printf("\n");
    }
    row=1+flag;
    flag++;

    DisplayTheTree(row,col,k,num,flag);
    }
}
