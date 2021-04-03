/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	int x1, x2, y1, y2, stred;

	printf("zadaj mi 4 suradnice: ");
	scanf("%d", &x1);
	scanf("%d", &x2);
	scanf("%d", &y1);
	scanf("%d", &y2);

	stred = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

	printf("stred je %d", stred);

	return 0;



}
