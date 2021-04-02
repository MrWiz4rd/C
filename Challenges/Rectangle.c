/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int vyska = 7;
	int sirka = 5;
	int obvod, obsah;

	obsah = vyska * sirka;
	printf("Obsah obdlznika je %d", obsah);

	obvod = 2 * (vyska + sirka);
	printf("\n Obvod obdlznika je %d", obvod);
	

	return 0;
}
