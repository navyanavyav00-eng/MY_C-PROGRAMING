#include<stdio.h>
int main() {
char  first[20]="Raj",last[20]="Taj",full[40];
int i=0,j=0,length=0,maxlength=20;
while ( first[i]!='\0')
{ full[length]=first[i];
i++;
length++;
full[length]=' ';
length ++;
}
while ( last[j]!='\0')
{ full[length]=last[j];
j++;
length++;
full[length]=' ';
length ++;
}
full[length]='\0';
if(length<=maxlength)
{ printf(" full name=%s\n",full);
printf(" length of full name=%d\n",length);
printf("fits in screen\n");
}
else
{ printf(" full name%s\n",full);
printf(" length of full name=%d\n",length);
printf(" not fits in screen\n");

}















}
