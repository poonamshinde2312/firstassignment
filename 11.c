#include<stdio.h>
#include<limits.h>
int main()
{
printf("datatype fs size range\n");

printf(".....................................\n");

printf("\n char %%c %d %d to %c ",sizeof(char),SCHAR_MIN,SCHAR_MAX);

printf("\n unsigned char %%c %d %hd to %c ",sizeof(unsigned char),CHAR_MIN,UCHAR_MAX);

printf("\n short int %c %d %d to %d ", sizeof(short int), SHRT_MIN,SHRT_MAX);

printf("\n unsigned short int %d %d %d to %d ",sizeof(unsigned short int),INT_MIN,SCHAR_MAX);

printf("\n int %d %d %d to %d ",sizeof( int),INT_MIN,SCHAR_MAX);

printf("\n unsigned int %d %d %d to %d ",sizeof(unsigned int),INT_MIN,UINT_MAX);

printf("\n long int %%hd %d %hd to %hd ",sizeof(long int),LONG_MIN,LONG_MAX);

printf("\n unsigned long int %d %d %d to %d ",sizeof(unsigned long int),LONG_MIN,ULONG_MAX);

return 0;
}

