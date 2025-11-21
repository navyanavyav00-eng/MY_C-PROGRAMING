#include<stdio.h>
#include<string.h>
int main()
{  char descri [200],keyword[50];
fgets(descri,sizeof(descri),stdin);
printf(" enter keyword to search\n");
    scanf("%s",keyword);
    if( strstr(descri,keyword)!=NULL)
    {printf(" keyword%s fond the course descri\n.",keyword);
    }
    else
    {printf(" keyword%s is not fond the course descri\n.",keyword);
    }
    
}
