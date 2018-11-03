#include<stdio.h>
int main()
{   
	char arr1[5] = {0,1,2,3,4};
	char arr2[5] = {5,6,7,8,9};
	char arr3[5];
	int sz = 0;
	for(sz=0; sz<sizeof(arr1)/sizeof(arr1[0]);sz++)
	{
      	arr3[sz] = arr1[sz];
		arr1[sz] = arr2[sz];
		arr2[sz] = arr3[sz];
		
	}
	for(sz=0; sz<sizeof(arr1)/sizeof(arr1[0]);sz++)
	{
		printf("%d",arr1[sz]);
		
	}
	    printf("\n");

	for(sz=0; sz<sizeof(arr1)/sizeof(arr1[0]);sz++)
	{
		printf("%d",arr2[sz]);
		
	}
	    printf("\n");

	
	return 0;
}
int main()
{
    double x = 0;
	double y = 0;
	double i = 0;
	double sum = 0;
	for(i=1; i<99; i+=2)
	{
		x=x+1/i;
	}
	for(i=2; i<100; i+=2)
	{
		y=y+1/i;
	}
	sum = x-y;
	printf("sum=%lf",sum);
	return 0;
}
int main()
{
    int i = 0;
	int j = 0;
	
	for(i=0; i<=100; i++)
	{ 
		if(i%10 == 9)

	{
     
	  j++;
	}
	 if(i/10 == 0)

	{
		
		j++;
	}
	}
	
     printf("%d\n",j);

	return 0;
}

