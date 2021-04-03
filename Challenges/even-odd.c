/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	int cislo;
	printf("daj mi cislo: ");
	scanf("%d", &cislo);

	if (cislo > 0 && cislo % 2 == 0)
	{
		printf("\ncislo %d je kladne, parne", cislo);
	}
	else if (cislo > 0 && cislo % 2 != 0)
	{
		printf("cislo %d je kladne, neparne", cislo);
	}
	else if (cislo < 0 && cislo % 2 == 0)
	{
		printf("cislo %d je zaporne, parne", cislo);
	}
	else if (cislo < 0 && cislo % 2 != 0)
	{
		printf("cislo %d je zaporne, neparne", cislo);
	}
	else if (cislo == 0)
	{
		printf("cislo je nula");
	}

}
