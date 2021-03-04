#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncat(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}
