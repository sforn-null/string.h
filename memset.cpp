#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 40);
	//�ĳ�0��ʱ��ܼ򵥣���Ҫ�ĳɱ�ĵ�ʱ��Ͳ�һ����
	//����ĳ�1��memset(arr, 1, 40);�����ǲ��еģ���Ϊ�Ǹ�ÿ���ֽ�
	return 0;
}