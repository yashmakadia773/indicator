#include<stdio.h>
int main() 
{
    int n,i;

    printf("Enter a array size: ");
    scanf("%d",&n);

    int arr[n];

    int *ptr=arr;

    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++) 
	{
        scanf("%d",ptr+i); 
    }

    printf("Array elements: ");
    for (i=0;i<n;i++) 
	{
        printf("%d ",*(ptr+i));
    }
    return 0;
}
