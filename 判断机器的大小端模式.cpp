#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>



void test1()
{
	int i = 1;
	char *p = &i;
	if (*p == 1)
	{
		printf("С��ģʽ\n");
	}
	else
	{
		printf("���ģʽ\n");

	}

}

int main()
{
	test1();
	system("pause");
	return 0;
}