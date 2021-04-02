/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int r = 6;
	float pi = 3.14f;
	double obvod, obsah;

	obvod = 2 * pi * r;
	printf("Obvod kruhu je %lf", obvod);

	obsah = pi * r * r;
	printf("\nObsah kruhu je %lf", obsah);

	return 0;
}
