#include<stdio.h>
#include<conio.h>
void main()
{	int i,j,n,a[200],t;
	clrscr();
	printf("\nEnter the Size :");
	scanf("%d",&n);
	printf("\nEnter The numbers :");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	for(j=0;j<(n-i)-1;j++)
		{	if(a[j]>a[j+1])
			{	t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nThe largest number is %d",a[n-1]);
	printf("\nSmallest is %d",a[0]);
	getch();
}
