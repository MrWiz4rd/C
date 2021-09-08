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
	int p = 1;
	int OstavajucePokusy = 3;
	
	
	
	printf("Zadaj heslo: ");
	scanf("%d", &h);
	
	for (p = 1; p <= 3; p++ )
	 {
	 	printf("Zadane heslo je zle zadaj ho znova:         //Ostava ti %d pokusov\n", OstavajucePokusy);
	 	scanf("%d", &h);
	 	OstavajucePokusy -= 1;
	 	if (h != heslo)
	 	{	
	 		continue;
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
			vyplata = 5.5 * hod;
			printf("Zarobil si %.2f €\n\n\n\n\n", vyplata);
		}
		else
		{
			return;
		}

	}
	 }
	
	






}
