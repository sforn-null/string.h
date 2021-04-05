#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	int ret = strcmp("abcd", "dcb");
	//strcmp函数是字符串比较，比较方法是对比相应字符的ASCII码值
	//返回类型是<0 , 0 , >0
	//printf("%d\n", ret);
	if (ret < 0)
	{
		printf("小于\n");
	}
	else if (ret == 0)
	{
		printf("等于\n");
	}
	else if(ret > 0)
	{
		printf("大于\n");
	}
	return 0;
}

//模拟实现strcmp
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1);
	assert(s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int ret = my_strcmp("abcd", "dcb");
	if (ret < 0)
	{
		printf("小于\n");
	}
	else if (ret == 0)
	{
		printf("等于\n");
	}
	else if (ret > 0)
	{
		printf("大于\n");
	}
	return 0;
}
