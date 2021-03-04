#include<stdio.h>
#include<string.h>

//判断一个字符串是不是另外一个字符串选择得来的
//简单方法
void left_move(char* str, int n)
{
	int i = 0;
	int len = strlen(str);
	for (i = 0;i < n;i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0;j < len - 1;j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + len - 1) = tmp;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int i = 0;
	int len = strlen(arr1);
	for (i = 0;i < len;i++)
	{
		left_move(arr1, 1);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("是选择得来的\n");
			break;
		}
	}
	if (i == len)
		printf("不是选择得来的\n");
	return 0;
}
