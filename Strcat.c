#include<stdio.h>
#include<string.h>
int main(){ 
 char gopal[10];
 printf("enter your string\n");
 scanf("%s",&gopal);
 strcat(gopal,"goal");
 printf(" before concat:%s\n",gopal);
 strcat( gopal,"legend");
 printf(" after cancat%s\n",gopal);







}
