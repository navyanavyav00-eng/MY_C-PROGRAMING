#include<stdio.h>

int main()
{ int choice,id;
printf("\n KYC verification\n");
printf("1.Addar verification\n");
printf(" 2.Pan verification\n");
printf(" 3.Aappar verification\n");
printf("4.Driving licence\n");
printf("5.passport photo\n");
printf("enter your choice(1-5):");
scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 printf(" Addar verified\n");
 break ;
case 2:
 printf(" Pan verified\n");
 break ;
case 3:
 printf("Aappar verified \n");
 break ;
 case 4:
 printf("Driving licence \n");
 break ;
 case 5:
 printf("passport photo verified \n");
 break ;
 default :
 printf("Not verified\n");
 }
 

}
