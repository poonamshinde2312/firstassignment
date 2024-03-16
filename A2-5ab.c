#include<stdio.h>
int main()
{
int n1 = 20;
int n2 = 40;
int n3 = 50;

if(n1>n2)
{
 if(n1>n3)
 printf("n1 is maximum \n");
 else
 printf("n3 is maximum \n");
 }
 else
 {
  if(n2>n3)
  printf("n2 is maximum\n");
  else
  printf("n3 is maximum\n");
  }
{

//conditional operator
int a=100,b=200,c=300;
int max;

max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("max=%d\n",max);
}
return 0;
}
