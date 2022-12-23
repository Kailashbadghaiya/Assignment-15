#include<stdio.h>
#include<conio.h>
int main()
{
    int a[] = {1,3,4,5,9,2,3,5,9,1,4,8,8,8};
    int hash[100] = {0} , i ;

    for(i=0;i<14;i++)
        hash[a[i]]++ ;

    for(i=0 ; i<100;i++)
    {
        if(hash[i] != 0)
        {
            printf("%d--------->%d\n",i,hash[i]);
        }
    }
    return 0;
}
