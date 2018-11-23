#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int* twoSum(int* nums, int numsSize, int target) 
//{
//	//int *s1 = nums;
//	//int *cp = NULL;
//	//while(nums)
//	//{
//	//	cp = s1;
//	//	cp++;
//	//	if(target == (int*)cp + (int)s1)
//	//	{
//	//		return s1;
//	//	}
//	//	cp++;
//	//	s1++;
//	//}
//	static int a[2] = {0};
//	int i = 0;
//	int j = 0;
//	for(i = 0; i<numsSize; i++ )
//	{
//		for(j= i+1; i<numsSize; i++)
//		{
//			if(target == nums[i] + nums[j])
//			{
//				 a[0] = i;
//				 a[1] = j;
//				 return a;
//			}
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//	int nums[] = {2,7,11,15};
//	int target = 18;
//	int numsSize = sizeof(nums)/sizeof(nums[0]);
//	int pos = 0;
//	(int*)pos = twoSum( nums, numsSize, target);
//	printf("%d", pos);
//	return 0;
//}
//int reverse(int x) 
//{
//	int i = 0;
//	long long j = 0;
//	while(x!= 0)
//	{
//		i = x%10;
//		j = j*10+i;
//	if(j>pow(2,31) || j<-pow(2,31))
//                return 0;
//                
//		x = x/10;
//	}
//	return j;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = reverse(a);
//	printf("%d",ret);
//	return 0;
//}
//
//
int isPalindrome(int x) 
{

    int i = 0;
    int j = 0;
    int k = x;
    if(x==0)
	{
        return 1;
	}
    else if(x>0)
    
    {

        while(x)
        {
            i = x%10;
            j = j*10+i;
            x = x/10;
            if(k == j)
                return 1;
        }
    }
    
   else if(x<0 || x%10 == 0)
    {
        return 0;
    }
    return 0;
}
int main()
{
	int a = 121;
	isPalindrome(a);
	return 0;
}