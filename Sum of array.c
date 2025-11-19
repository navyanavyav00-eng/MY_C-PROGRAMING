#include<stdio.h>

int main()
{ 
    int rose[5];
    int sum=0;
    printf("enter the element\n");
    for( int i=0; i<5;i++)
    { scanf("%d",&rose[i]);
    
    
    sum+=rose[i];

    printf("%d\n",sum);
    }
    
    
    
    
    
    return 0;
}
