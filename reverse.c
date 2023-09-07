#include<stdio.h>
void rev(int *a,int b) 
{
    int *start=a;       
    int *end=a+b-1; 

    while(start<end)
	{

        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    int n,i;
    printf("Enter a array size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++) 
	{
        scanf("%d",&a[i]);
    }

    rev(a,n);

    printf("Reversed array : ");
    for (i=0;i<n;i++) 
	{
        printf("%d ",a[i]);
    }

    return 0;
}
