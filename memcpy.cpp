#include<stdio.h>
#include<string.h>
//�ڴ濽��
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
		//����һ���ֽ�
		*(char*)dest = *(char*)src;//Ҫ��ת������
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

�ڿ������memcpy�ǿ���ʵ���ص��Ŀ�����
������c���Ե�Ҫ������memcpyֻ��ʵ�ֲ��ص��Ŀ�����