//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define N 14
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int k = 0;
//	int a[N][N];
//	printf("请输入杨辉三角函数的行数>:");
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//		a[i][1] = a[i][i] = 1;
//	}
//	for(i=3; i<=n; i++)
//	{
//		for(j=2; j<i; j++)
//		{
//			a[i][j] = a[i-1][j-1] + a[i-1][j];
//		}
//	}
//	for(i=1; i<=n; i++)
//	{
//		for(k=1; k<n; k++)
//		
//			printf(" ");
//		
//		for(j=1; j<=i; j++)
//		
//			printf("%6d", a[i][j]);
//		
//		printf("\n");
//	}
//	printf("\n");
//	
//
//	return 0;
//}
