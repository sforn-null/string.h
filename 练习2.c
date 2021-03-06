#include<stdio.h>
#include<string.h>
char* find_str(char* str, int len)
{
    int i = 0;
    int k = 1;
    char*j=str;
    while (*str)
    {
        k=1;
        for (i = 1;i < len;i++)
        {
            if (*str == *(str + i))
            {
                k++;
            }
        }
        if (k == 1)
        {
            return str;
        }
        str++;
    }
    return -1;
}
int main()
{
    char arr[20] = "0";
    while(scanf("%s", arr)!=EOF)
    {
    int len = sizeof(arr) / sizeof(0);
     
    char*a = find_str(arr, len);
    printf("%s\n",a);
    }
    return 0;
}
