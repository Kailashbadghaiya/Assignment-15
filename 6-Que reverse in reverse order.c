#include<stdio.h>
#include<conio.h>
int main()
{
    int a[] = {1,2,3,4,5},i;

    int length = sizeof(a)/sizeof(a[0]);

    printf("Original array: \n");
    for (i=0;i<length;i++)
    {
        printf("%d ",a[i]);
    }
        printf("\n");

    printf("Array in reverse order: \n");

    for (i=length-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

