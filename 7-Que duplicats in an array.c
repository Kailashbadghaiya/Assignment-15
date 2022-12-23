#include<stdio.h>
#include<conio.h>
int main()
{
    int a[] = {1,2,3,5,2,4,6,8,5,3,6,7};
    int hash[10] = {0},i ;

    for(i=0;i<12;i++)
    {
        hash[a[i]]++ ;
    }
    for(i=0;i<10;i++)
    {
        if(hash[i] == 2)
            printf("%d ",i);
    }
    return 0;
}
