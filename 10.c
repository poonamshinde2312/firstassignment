#include<stdio.h>
#include<math.h>

typedef enum choice {area=1,perimeter} TR;

int main()

{
int a,b,c,res;
TR n1;
printf("1.Area:\n 2.perimeter:\n 3.Enter choice:\n");
scanf("%d", &n1);

printf("enter side a:" );
scanf("%d",&a);

printf("enter side b:");
scanf("%d",&b);

printf("enter side c:");
scanf("%d",&c);

switch(n1)
{
case perimeter:res=a+b+(c*a)+b+c;
        printf("perimeter =%d \n",res);
     break;

case area: int s= (a+b+c)/2;
       res= sqrt(s*(s-a)*(s-b)*(s-c));
	   printf("area =%d \n",res);
     break;

default : printf("invalid operands");

}
return 0;

}

