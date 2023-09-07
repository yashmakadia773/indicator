#include<stdio.h>
swap(int *p,int *p1)
{
	int temp;
	temp = *p;
	*p = *p1;
	*p1 = temp;

	printf("Swapping value of A = %d\n",*p);
	printf("Swapping value of B = %d\n",*p1);

}

main()
{
	int a,b;
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);

	swap(&a,&b);

}
