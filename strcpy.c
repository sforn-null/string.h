#include<stdio.h>
#include<string.h>
#include<assert.h>
//strcpy的简单使用
int main()
{
	const char* str1 = "abcdef";
	char arr[20] = "xxxxxxxx";
	strcpy(arr, str1);
	printf("%s\n", arr);
	return 0;
}

//模拟实现strcpy
//第一次代码是初步代码
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*src !='\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;//拷贝'\0'
}
int main()
{
	const char* str1 = "abcdef";
	char arr[20] = "xxxxxxxx";
	my_strcpy(arr, str1);
	printf("%s\n", arr);
	return 0;
}

//优化
char* my_strcpy(char* dest, const char* src)
//经过查询发现strcpy时链式访问，返回类型应该是char*
{
	char* ret = dest;
	//只会dest的位置会指向末尾，所以提前将dest储存给ret
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		//当*dest = *src='\0'时ASCII码值为0，跳出循环
	{
		;
	}
	return ret;
}
int main()
{
	const char* str1 = "abcdef";
	char arr[20] = "xxxxxxxx";
	//my_strcpy(arr, str1);
	//printf("%s\n", arr);
	printf("%s\n", my_strcpy(arr, str1));
	//将函数的返回值作为另一个函数的参数，链式访问
	return 0;
}
