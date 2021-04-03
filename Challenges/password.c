/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	int heslo = 7355608;
	int h;

	printf("pre vstup zadajte heslo: ");
	while (1)
	{
		scanf("%d", &h);

		if (h == heslo)
		{
			printf("heslo je spravne!");
			return;
		}
		else
		{
			printf("heslo je nespravne, zadaj ho znova: ");
		}
	}
}
