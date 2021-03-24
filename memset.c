#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 40);
	//改成0的时候很简单，但要改成别的的时候就不一样了
	//例如改成1，memset(arr, 1, 40);这样是不行的，因为是改每个字节
	return 0;
}
