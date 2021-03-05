#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "cdefab";
	if (strlen(arr1) != strlen(arr2))
	{
		printf("no\n");
		return 0;
	}
	strncat(arr1, arr1, 6);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("no\n");
	}
	else
	{
		printf("yes\n");
	}
	return 0;
}