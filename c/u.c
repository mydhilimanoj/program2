#include<stdio.h>
int myFunction(int x,int y){
return x+y;
}

int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
int result=myFunction(a,b);
printf("Result is=%d\n",result);
return 0;
}


