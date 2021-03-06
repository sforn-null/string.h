#include<stdio.h>
#include<string.h>
#include<errno.h>

//strerror 返回错误码，所对应的错误信息
int main()
{
	//当调用库函数，发生错误的时候，就会有一些错误码
	//错误码会放在errno这个全局变量中
	//#include<errno.h>
	printf("%s\n", strerror(errno));
	printf("%s\n", strerror(errno));
	printf("%s\n", strerror(errno));
	printf("%s\n", strerror(errno));
	return 0;
}
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("打印错误信息");
	}
	else
	{
		printf("打开成功\n");
		fclose(pf);
		pf = NULL;
	}
	return 0;
}
