#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char arr[] = "hello bit";
	size_t;//返回值是size_t unsigned int
	int len = strlen(arr);
	printf("len=%d\n", len);
	return 0;
}

int main()
{
	const char* p1 = "abc";
	const char* p2 = "adbcdef";
	if (strlen(p1) - strlen(p2) > 0)
		//因为返回值是无符号数，所以没有负数
	{
		printf("hehe");
	}
	else
	{
		printf("haha");
	}
	return 0;
}

模拟实现strlen
size_t my_strlen(const char* str)
{
	int count = 0;//计数器
	assert(str != NULL);
	//断言不是空指针，如果没有这步，当是空指针的时候可能会崩溃
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//如果不能用临时变量
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//指针相减的做法
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	const char* start = str;
	//str 不能初始化char类型，所以用const
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
