#include<stdio.h>
#include<conio.h>
void leftRotateByOne(int a[], int n)
{
    int first = a[0],i;
    for (i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }

    a[n-1] = first;
}
void leftRotate(int a[],int r,int n)
{
    int i ;
    if (r<0 || r>=n)
    {
        return;
    }

    for (i=0;i<r;i++)
    {
        leftRotateByOne(a, n);
    }
}

int main(void)
{
    int a[] = {32,29,40,12,70},i;
    int r = 2;

    int n = sizeof(a)/sizeof(a[0]);

    leftRotate(a,r,n);

    for (i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }

    return 0;
}
