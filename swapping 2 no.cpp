#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two no to be swapped\n");
	printf("enter first no a=\n");
	scanf("%d",&a);//accepts 1st no from userand stores in a
	printf("enter second no b=\n");
	scanf("%d",&b);//accepts  2nd no and stores in b
	a=a+b;

	b=a-b;
	a=a-b;
	printf("after swapping\n");
	printf("a=%d and b=%d",a,b);//output display
	return 0;


}
