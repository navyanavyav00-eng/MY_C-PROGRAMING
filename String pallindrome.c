#include<stdio.h>
int main (){
char str[50],rev[50];
int i, len;
printf("enter a string:\n");
scanf("%s",str);
 len = strlen(str);
 
 for( i=0;i<len;i++)
{ rev[i]= str[len-1-i];
}
rev[len]='\0';
if(strcmp(str,rev)==0){
printf(" it a pallindrome");
}
else
{ printf("it is not a pallindrome");
}
return 0;
}
