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



void test2()
{
	union A
	{
		int i;
		char b;

	}a;
	a.i = 2;
	if (a.b == 2)
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
	test2();
	system("pause");
	return 0;
}