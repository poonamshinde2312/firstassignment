/*Write a program to accept number and check
whether the number is +ve, -ve and zero.)*/

#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);

if (num>0)
{
printf("number is positive\n");
}

else if (num<0)
{
printf("number is negative\n");
}
else
{
printf("number is zero\n");

}
return 0;
}

