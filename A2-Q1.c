/* Q1)Write a program to accept two numbers and 
display division of the two numbers. Check for
divide by zero error. If divider is zero then
display appropriate error message.
*/

#include<stdio.h>
int main()
{
  int num1,num2,div;

  printf("enter the num1\n");
  scanf("%d",&num1);

  printf("enter the num2\n");
  scanf("%d",&num2);

  if(num2!=0)
{
  div=num1/num2;
  printf("division is=%d\n",div);
}
 else
{
printf("division by zero is not possible\n");
}
return 0;
}



