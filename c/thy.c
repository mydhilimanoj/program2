#include<stdio.h>
int main()
{
char operation;
double n1, n2;
printf("Enter an operator(+,-,*,/):");
scanf("%c", &operation);
printf("Enter two operands:");
scanf("%lf%lf",&n1,&n2);
switch(operation)
{
case'+':
printf("%lf+%lf=%lf",n1,n2,n1+n2);
break;

case'-':
printf("%lf-%lf=%lf",n1,n2,n1-n2);
break;


case'*':
printf("%lf*%lf=%lf",n1,n1,n1*n2);
break;

case'/':
printf("%lf/%lf=%lf",n1,n2,n1/n2);
break;

//operator doesn't match any case constant +,-,*,/
default:
printf("Error! operator is not correct");
break;
}
return 0;
}
