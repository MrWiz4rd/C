/*
*Autor: Roman Duraník
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int a, b, c;

	printf("Daj mi 3 cisla: \n");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b && a > c)
	{
		printf("z tychto cisiel je najvacsie %d\n", a);
	}
	else if (b > a && b > c)
	{
		printf("z tychto cisiel je najvacsie %d", b);
	}
	else
	{
		printf("z tychto cisiel je najvacsie %d", c);
	}
}
