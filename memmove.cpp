#include<stdio.h>
#include<string.h>
#include<assert.h>
//�ܹ�ʵ���ص�����

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
		while (count--)//��ǰ��󿽱�
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)//�Ӻ���ǰ����
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

//Ҳ���Դ����������飬��ԭ�����е����Ž�ȥ�����ǻ��˷ѿռ䣬Ҳ���в�֪���ռ䴴����������