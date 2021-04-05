#include<stdio.h>
#include<string.h>

//strcat 字符串的追加或连接
int main()
{
	char arr1[20] = "hello";
	strcat(arr1, "world");
	printf("%s\n", arr1);
	return 0;
}
//模拟实现strcat
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//1. 找目的地空间的'\0'
	while (*dest)
	{
		dest++;
	}
	//2. 拷贝数据
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	//my_strcat(arr1, "world");
	//printf("%s\n", arr1);
	printf("%s\n", my_strcat(arr1, "world"));
	return 0;
}
