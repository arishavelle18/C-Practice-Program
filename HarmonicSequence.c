#include<stdio.h>
#include<stdlib.h>

/// Question : Write a program in C to display the n terms of harmonic series and their sum.


void DisplayHarmonicSeq(int harmonic);
int main()
{
    int harmonic;

    printf("Enter the nth number : ");
    scanf("%d",&harmonic);

    DisplayHarmonicSeq(harmonic);

}
void DisplayHarmonicSeq(int harmonic)
{
    int num;
    double sum=0;

    printf("\nSequence: \n\n");
    for(num=1;num<=harmonic;num++)
    {
        sum = sum +(1/(double)num); /// need typecasting because the num should be decimal to avoid overwrite.
        (num!=harmonic)?printf("1/%d + ",num):printf("1/%d = ",num);
    }
    printf("\nSum of Series in to %d is  : %f\n\n\n",harmonic,sum);

}
