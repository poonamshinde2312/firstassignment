/*Write a program to display number of days in the given year.
Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, 
except that years divisible by 400 are leap years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include<stdio.h>
int main()
{
int year;
printf("enter the year ");
scanf("year=%d \n",&year);
{
if (year % 400==0)
printf(" leap year \n");
else if(year % 100==0)
printf("not leap year\n");
else if(year % 4 ==0)
printf("leap year\n");

else
printf("not leap year\n");
}

// Using logical operators
{
if ((year % 4 ==0) && (year % 100!=0)|| year % 400==0)
printf("leap year");
else
printf("not leap year");
}
//conditional operator
(year % 4 ==0) && (year % 100!=0)?printf("leap year\n"):((year % 400==0)?printf("leap year\n"):printf("not leap year\n"));

return 0;
}






