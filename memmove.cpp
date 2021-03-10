#include<stdio.h>
#include<string.h>
#include<assert.h>
//能够实现重叠拷贝

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	memmove(arr1+2, arr1, 16);
	return 0;
}

void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		while (count--)//从前向后拷贝
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)//从后向前拷贝
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 16);
	return 0;
}

//也可以创建个新数组，将原数组中的数放进去，但是会浪费空间，也会有不知道空间创建多大等困扰