#include<stdio.h>
void main()
{
	int n,i,j,a[20],d,k,l,temp;
	printf("Enter the array element size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&d);
	k=0;
	l=n-1;
	for(i=0;i<n;i++)
	{
		if(k<l)
		{
			temp=a[k];
			a[k]=a[l];
			a[l]=temp;
	    }
	    k++;
	    l--;
	}
	k=0;
	l=d-1;
	for(i=0;i<d;i++)
	{
		if(k<l)
		{
			temp=a[k];
			a[k]=a[l];
			a[l]=temp;
	    }
	    k++;
	    l--;
	}
	k=d;
	l=n-1;
	for(i=d;i<n;i++)
	{
		if(k<l)
		{
			temp=a[k];
			a[k]=a[l];
			a[l]=temp;
	    }
	    k++;
	    l--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
