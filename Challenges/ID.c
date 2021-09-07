/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int ID;
	int hod;
	float vyplata;
	int heslo = 7355608;
	int h;

	printf("Zadaj heslo: ");
	scanf("%d", &h);
	if (h != heslo)
	{
		return;
	}
	else
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("Zadajte vase ID: \n");
		scanf("%d", &ID);
		
		switch (ID)
		{
		case 6218:
			printf("Vitajte Roman!\n\n\n\n\n\n");
			break;
		case 15973:
			printf("Vitajte Vlado!\n\n\n\n\n\n");
		default:
			printf("Neznámy user");
			break;
		}

		if (ID == 6218 || ID == 15973)
		{
			printf("Kolko hodín si odpracoval?: \n");
			scanf("%d", &hod);
			vyplata = 5.5f * hod;
			printf("Zarobil si %.2f €", vyplata);
		}
		else
		{
			return;
		}

	}






}
