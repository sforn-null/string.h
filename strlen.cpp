#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr[] = "hello bit";
//	size_t;//����ֵ��size_t unsigned int
//	int len = strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abc";
//	const char* p2 = "adbcdef";
//	if (strlen(p1) - strlen(p2) > 0)
//		//��Ϊ����ֵ���޷�����������û�и���
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//ģ��ʵ��strlen
//size_t my_strlen(const char* str)
//{
//	int count = 0;//������
//	assert(str != NULL);
//	//���Բ��ǿ�ָ�룬���û���ⲽ�����ǿ�ָ���ʱ����ܻ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�����������ʱ����
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ�����������
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	//str ���ܳ�ʼ��char���ͣ�������const
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}