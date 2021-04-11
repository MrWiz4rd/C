/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	float vzdialenost, benzin, spotreba;

	printf("Kolko km si dnes najazdil? ");
	scanf("%f", &vzdialenost);
	printf("Kolko benzinu si spotreboval? ");
	scanf("%f", &benzin);

	spotreba = benzin / vzdialenost * 100;

	printf("tvoja spotreba je: %.2f", spotreba);
	return 0;
}
