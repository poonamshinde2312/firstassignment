#include<stdio.h>
int main()
{
 int empid,dn;
 char dc;
 printf("enter empid :");
 scanf("%d",&empid);

 printf("enter dep no :");
 scanf("%d",&dn);

printf("enter dep code :");
 scanf("%c",&dc);
getchar();
dc = getchar();
switch(dn)
{
  case 10:
    printf("Employee with employee id %d is working in marketing department ",empid);
	 break;

  case 20:
     printf("Employee with employee id %d is working in management department ",empid);
	 break;
	 
  case 30:
     printf("Employee with employee id %d is working in sales department ",empid);
	 break;

  case 40:
     printf("Employee with employee id %d is working in designing department ",empid);
	 break;
     
 }

 switch(dc)
{
  case 'M':
     printf("as manager \n");
     break;
 
  case 'S':
     printf("as supervisor \n");
     break;
 
  case 's':
     printf("as security officer \n");
     break;
 
  case 'C':
     printf("as clerk \n");
	 break;

	 }

	 return 0;
	 }
