//implement basic four function calculator

#include<stdio.h>
//in decleration we have to define function to inform compiler that which function we are going to use 

int calculate(int ,char,int );

int flag;
int main()
{
char choice;
int num1,num2,result;
char opr;

int flag;

//function call
do
{
printf("enter num1 opr num2 :");
scanf("%d %c %d", &num1,&opr,&num2);
result= calculate(num1, opr, num2);
if(flag==0)
printf("%d %c %d= %d\n",num1,opr,num2,result);
else
flag =0;

printf("do you want to continue? (y/n)");
scanf("%*c%c",&choice);
}
while(choice!='n');
return 0;

}

//function defination in defination argument 
//name with data type is compulsory  

int calculate(int num1,char opr,int num2)
{
int result;

switch(opr)
 {
case '+':  //case value should be in numbers but if we are using characters or any symbols
          //then it should be in single quotes
    result=num1+num2;
    break;

case '-':
    result=num1-num2;
    break;

case '*':
    result=num1*num2;
	break;

case '/':
   if(num2!=0)
   {
   result=num1/num2;
   }
   else
   {
   printf("denominator is zero\n");
   }
   break;
   }
return result;
}





















