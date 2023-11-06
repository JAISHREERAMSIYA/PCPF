include<stdio.h>
#include<stdlib.h>
void main()
{
int principle, rate, time, interest;
printf("Enter the principle, rate and time period resp. \n");
scanf("%d %d %d",&principle,&rate,&time);
interest = principle*rate*time/100;
printf("The simple interest is: %d",interest);
}