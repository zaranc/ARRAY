#include<stdio.h>

main()
{
	int n,n1,k;
	printf("Enter Size of A array = ");
	scanf("%d",&n);
	printf("Enter Size of B array = ");
	scanf("%d",&n1);
	int a[n],b[n1],merg[200],i;
	printf("-----Enter 1st Array Element-----\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		merg[i] =a[i];
		k = i;
		k++;
	}
	
	printf("-----Enter 2nd Array Element-----\n");
	for(i=0;i<n1;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		merg[k] =b[i];
		k++;
	}
	
	printf("-----merge of Array Element-----\n");
	for(i=0;i<n+n1;i++)
	{
		printf("a[%d] = %d\n",i,merg[i]);
	}
}
