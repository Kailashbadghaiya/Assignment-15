#include<stdio.h>
#include<conio.h>
max(int [],int);
void main()
{
	int a[]={10,5,45,12,19};
	int n=5,m;

	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d",m);

}
max(int a[],int b)
{
	int temp,i;
	 temp=a[0];
	for(i=1;i<b;i++)
        {
		if(a[i]>temp)
			temp=a[i];
	}
	return(temp);
}
