#include<stdio.h>
void main()
{
int r,sum=0,num;
printf("Enter the number");
scanf("%d",&num);
while(num>0)
{
  r=num%10;
sum=sum+r;
num=num/10;
}
printf("%d\n",sum);
}
