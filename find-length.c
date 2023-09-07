#include<stdio.h>
int main() 
{
	char s[100], *p;
    int count;

    printf("Enter any string: ");
    gets(s);

    p=s;

    count=0;

    while(*p!=NULL) 
	{
        count++;
        p++;
    }

    printf("Length of string : %d",count);

    return 0;

}
