/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int medzera()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}


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
		printf("Zadali ste zle heslo");
		return;
	}
	else
	{
		medzera();
		printf("Zadajte vase ID: \n");
		scanf("%d", &ID);
		
		switch (ID)
		{
		case 6218:
			medzera();
			printf("Vitajte Roman!\n\n");
			break;
		case 15973:
			medzera();
			printf("Vitajte Vlado!\n\n");
		default:
			printf("Neznamy user");
			break;
		}

		if (ID == 6218 || ID == 15973)
		{
			printf("Kolko hodin si odpracoval?: \n");
			scanf("%d", &hod);
			vyplata = 5.5f * hod;
			printf("Zarobil si %.2f €\n\n\n\n\n", vyplata);
		}
		else
		{
			return;
		}

	}






}
