#include<stdio.h>
#include<conio.h>
void main(){

int a=11,b=22,c;
clrscr();
printf("a before swaping = %d\n",a);
printf("b before swaping = %d\n",b);
c=b;
b=a;
a=c;
printf("a after swaping = %d\n",a);
printf("b after swaping = %d\n",b);
getch();
}