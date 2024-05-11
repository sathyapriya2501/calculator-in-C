#include<stdio.h>
void main() {
	int add,sub,mul,div,operation,a,b,o;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter your operation 1.add,2.sub,3.multiply,4.divide:");
	scanf("%d",&operation);
	switch (operation)
	{
		case 1:{
			add=a+b;
			printf("Tne addition of two number is:%d",add);
			break;
		}
		case 2:{
			sub=a-b;
			printf("The subraction of two number is:%d",sub);
			break;
		}
		case 3:{
			mul=a*b;
			printf("The multiply of two number is:%d",mul);
			break;
		}
		case 4:{
			div=a/b;
			printf("The division of two number is:%d",div);
			break;
		}
		default:
		{
			printf("Invalid");
			break;
		}
}
}
