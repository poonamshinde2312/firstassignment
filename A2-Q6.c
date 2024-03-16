/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/

#include<stdio.h>
int main()
{

int num,rev=0,rem=1,temp;
printf("enter the number\n ");
scanf("%d",&num);
temp=num;

while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
{
printf("number is numeric palindrome %d\n",rev);
}
else
{
printf("number is not numeric palindrome %d\n",rev);
}
return 0;
}

