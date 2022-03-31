#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Number after swap \n %d \n %d",a,b);
	return 0;
}
