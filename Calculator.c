#include<stdio.h>
int main()
{
	char ch;
	float a,b;
	float x;
	printf("Enter the operator: \n");
	scanf("%c",&ch);
	printf("Enter the 1st number: \n");
	scanf("%f",&a);
	printf("Enter the 2nd number: \n");
	scanf("%f",&b);
	if(ch=='+')
	{
		x=a+b;
		printf("The sum of %f and %f is %f\n",a,b,x);
	}
	else if(ch=='-')
	{
		x=a-b;
		printf("The sum of %f and %f is %f\n",a,b,x);
	}
	else if(ch=='*')
	{
		x=a*b;
		printf("The sum of %f and %f is %f\n",a,b,x);
	}
	else if(ch=='/')
	{
		x=a/b;
		printf("The sum of %f and %f is %f\n",a,b,x);
	}
	return 0;
}
