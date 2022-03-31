#include<stdio.h>
int main()
{
	int n;
	printf("Enter\n 1 for pizza\n 2 for burger\n 3 for pasta\n 4 for french fries\n 5 for sandwich\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Pizza,Rs 239");
	    		break;
		case 2: printf("Burger,Rs 129");
				break;	
		case 3: printf("Pasta,Rs 179");
				break;
		case 4: printf("French Fries,Rs 99");
				break;
		case 5: printf("Sandwich,Rs 149");
				break;
		default:printf("Invalid Choice");
	}
	return 0;
}
