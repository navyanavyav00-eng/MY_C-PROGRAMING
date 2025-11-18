#include<stdio.h>
int main ()
{ int year;
printf("enter a year\n");
scanf("%d",&year);
if((year%4==0) && (year%100!=0) || (year%400==0))
{printf("LEAP YEAR",year);
}
else
{ printf("COMMON YEAR",year);
}












}





    
