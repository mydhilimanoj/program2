#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter two numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("\n %d is greater",a);
else if(b>c)
printf("\n %d is greater",b);
else
printf("\n %d is greater",c);
}
