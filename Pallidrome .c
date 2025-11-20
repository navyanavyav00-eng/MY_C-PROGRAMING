#include<stdio.h>
int main ()
{ 
 int  original,remainder,num,rev=0;
 printf("enter the number \n");
scanf("%d",&num);
original = num;
while( num!=0)
{ remainder=num%10;
rev=rev*10+remainder ;
num= num/10;


}
if( original==rev){ printf("pallindrome");
}
else{ printf("not pallindrome");
}





}
