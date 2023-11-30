#include<stdio.h>
int main()
{
	int a;
	int *ptr = &a;
	printf("Dia chi cach 1 bien a = %d\n",ptr);
	printf("Dia chi cach 2 bien a = %d",&a);
}