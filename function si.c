// Online C compiler to run C program online
#include <stdio.h>
int sicalucator(){
int p, r, t,si;
printf("enter principle amount\n");
scanf("%d",&p);
printf("enter  number of year\n");
scanf("%d",&t);
printf("enter  the rate of interest\n");
scanf("%d",&r);
si=(p*r*t)/100;
printf("enter simple interest:%d",si);
}





int main() {
  sicalucator();  

}
