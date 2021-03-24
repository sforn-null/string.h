#include<stdio.h>
#include<string.h>
//内存拷贝
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1));
	return 0;
}

void* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	while (count--)
	{
		//拷贝一个字节
		*(char*)dest = *(char*)src;//要先转换类型
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	return 0;
}

在库里面的memcpy是可以实现重叠的拷贝的
但是在c语言的要求里面memcpy只是实现不重叠的拷贝的
