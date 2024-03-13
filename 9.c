#include<stdio.h>
int main()

{
float celsius , fahrenheit;

printf("enter temperature in celsius\n");
scanf("%f",&celsius);
fahrenheit=((9/5)*celsius) +32;
celsius=(fahrenheit-32)*5/9;
printf("elsius= %f and fahrenheit =%f\n", celsius , fahrenheit);



return 0;

}

