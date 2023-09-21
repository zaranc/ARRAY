#include<stdio.h>

main()
{
	int n,ave;
	printf("Enter Array Size = ");
	scanf("%d",&n);
	int arr[n],array[n],sum[n],i;
	printf("-----Enter 1st Array Element-----\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("-----Enter 2nd Array Element-----\n");
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	
	printf("-----Enter 2nd Array Element-----\n");
	for(i=0;i<n;i++)
	{
		sum[i] = arr[i] + array[i];
		printf("%d\n",sum[i]);
	}
}
