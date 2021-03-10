#include<stdio.h>
#include<string.h>

//ÄÚ´æ±È½Ï
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,3,3 };
	int ret = memcmp(arr1, arr2, 20);
	printf("%d\n", ret);
	return 0;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,3,3 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);
	return 0;
}