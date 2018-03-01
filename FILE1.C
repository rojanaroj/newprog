#include<stdio.h>
int main()
{
unsigned long int h;
scanf("%ld",&h);
if(h<0)
{
printf("NEGATIVE");
}
elseif(h==0)
printf("ZERO");
else
{
printf("POSITIVE");
}
}
