#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,occurance[10],j;

	printf("Enter 10 Number");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		occurance[i]=0;
		for(j=1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				occurance[i]++;
			}
		}
		if(occurance[i]>1)
		{
			printf("Duplicate Element is %d and occurance is %d \n",a[i],occurance[i]);
		}
	}
	return 0;
}
