#include<stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main()
{
	int number1,number2;
	int different;
	printf("Nhap so thu 1: ");
	scanf("%d",&number1);
	printf("Nhap so thu 2: ");
	scanf("%d",&number2);
	printf("Hieu 2 so truoc khi doi : %d\n",(number1-number2));
	swap(&number1,&number2);
	printf("Hieu 2 so sau khi doi : %d",(number1-number2));
	return 0;
}
