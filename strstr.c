#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
const char* my_strstr(const char* str1, const char* str2)
{
	const char* cp;//记录开始匹配的位置
	const char* s1;//遍历str1指向的字符串
	const char* s2;//遍历str2指向的字符串

	assert(str1 && str2);
	if (*str2 == '\0')
		return str1;

	cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cp;

		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);
	}
}