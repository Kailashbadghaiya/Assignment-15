#include<stdio.h>
#include<conio.h>
int main()
{
    int a[] = {2,4,6,9,10} ;
    int b[] = {1,5,8,7,10};
    int c[10] ;
    int i,j,k=0 ;

    for(i=0,j=0;j<5 && j<5;k++)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i] ;
            i++ ;
        }
        else
        {
            c[k] = b[j] ;
            j++ ;
        }
    }
if(i == 5 && j != 5)
{
    for( ;j<5;j++)
        c[k++] = b[j] ;
}
if(i != 5 && j == 5)
{
    for( ;i<5;i++)
     c[k++] = a[i] ;
}
for(i=0;i<10;i++)
{
    printf("%d ",c[i]);
}
return 0;
}
