#include<stdio.h>
#include<conio.h>
void main()
{
        int i,j,temp,n,a[30];

        printf("Enter the value of number \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i=0;i<n;i++)
            scanf("%d", &a[i]);

        for (i=0;i<n;i++)
        {
             for (j=i+1;j<n;j++)
            {
                if (a[i] > a[j])
                {
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("The numbers arranged in ascending order :\n");
        for (i=0;i<n;i++)
            printf("%d\n",a[i]);
    }
