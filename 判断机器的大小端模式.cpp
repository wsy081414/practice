#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>



void test1()
{
	int i = 1;
	char *p = &i;
	if (*p == 1)
	{
		printf("小端模式\n");
	}
	else
	{
		printf("大端模式\n");

	}

}

int main()
{
	test1();
	system("pause");
	return 0;
}