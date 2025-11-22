#include<stdio.h>
union data{
int i;     
float f;
char name [20];

};

int main()

{ union data d;
 d.i=6;
 printf("%d\n",d.i);
    d .f=6.3;
    printf("%f\n",d.f);
    printf("%d\n",d.i); // garbage value 
}
