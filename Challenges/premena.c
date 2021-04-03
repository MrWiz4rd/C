/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	int h, m, s, a;

	printf("zadaj mi seknundy: ");
	scanf("%d", &a);

	h = a / 3600;
	printf("to je %d hodin\n", h);

	m = (a % 3600) / 60;
	printf("to je %d minut\n", m);

	s = (a % 3600) % 60;
	printf("to je %d sekund\n", s);

	return 0;
}
