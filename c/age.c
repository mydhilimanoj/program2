#include<stdio.h>
void main()
{
int myage=43;
int *ptr=&myage;

printf("%d\n",myage);
printf("%p\n",&myage);
printf("%p\n",ptr);
}
