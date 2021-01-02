#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Max 5
///insertSorted(int x) – insert x in a sorted list with no duplicates.

typedef struct num
{
    int data[100];
    int count;
}a;
a ins;
void makenull();
int menu();
void insertSorted(int x);
int isempty();
int isfull();
void Delete();
int locate(int numDel);
void Display();
void sorted();
int main()
{
    int x;
    makenull();
    while(1)
    {
        switch(menu())
        {
            case 1:
                printf("Enter the number : ");
                scanf("%d",&x);
                insertSorted(x);
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                break;
            default:
                printf("Sorry Please input 1-4 only....");
        }
    }

}
void makenull()
{
    ins.count=0;
}
int menu()
{
    system("cls");
    char *m[]={"Insert","Delete","Display","Exit"};
    int i,choose;

    for(i=0;i<4;i++)
    {
        printf("%d .) %s \n",i+1,m[i]);
    }
    printf("Enter the process  : ");
    scanf("%d",&choose);
    system("cls");
    return choose;
}
void insertSorted(int x)
{
    if(isfull())
    {
        printf("Sorry it is full.....");
        getch();
    }
    else
    {
        if(locate(x)==0)
        {
            ins.count++;
            ins.data[ins.count] = x;
            sorted();
        }
        else
        {
            printf("Try again your number is already taken.");
            getch();
        }

    }

}
void sorted()
{
    int i,j,temp;
    for(i=1;i<=ins.count;i++)
    {
        for(j=1;j<=ins.count;j++)
        {
            if(ins.data[i]<ins.data[j])
            {
                temp = ins.data[i];
                ins.data[i]=ins.data[j];
                ins.data[j]=temp;
            }
        }
    }
}
int isempty()
{
    return(ins.count==0);
}
int isfull()
{
    return(ins.count==Max);
}
void Delete()
{

    if(isempty())
    {
        printf("Empty Sorry.....");
    }
    else
    {
        int numDel,i;
        printf("Enter the number you want to delete : ");
        scanf("%d",&numDel);
        int hold = locate(numDel);
        if(hold>0)
        {
            for(i=hold;i<=ins.count;i++)
            {
                ins.data[i]=ins.data[i+1];

            }
            ins.count--;
        }
        else
        {
            printf("Your number is not found.....");
        }
    }
getch();
}
int locate(int numDel)
{
    int i;
    for(i=1;i<=ins.count;i++)
    {
        if(ins.data[i]==numDel)
            return i;
    }
return 0;
}
void Display()
{
    int i;
    if(isempty())
    {
        printf("Empty Sorry......");
    }
    else
    {
        for(i=1;i<=ins.count;i++)
        {
            printf("%d .) %d \n",i,ins.data[i]);
        }
    }
getch();
}
