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
	

	printf("Daj mi tvoje ID \n");
	scanf("%d", &ID);


	switch (ID)
	{
	case 1:
		printf("User Roman\n");
		break;
	case 2:
		printf("User martin\n");
		break;
	default: printf("Neznamy user\n");
		break;
	}

	if (ID > 2 || ID == 0)
	{
		return 0;
	}
	else {
		printf("Kolko hodin si odpracoval? \n");
		scanf("%d", &hod);


		vyplata = 1500 * hod;

		printf("ID zamestnanca je %d\nZa mesiac odpracoval %d hodin\nJeho vyplata je %.2f eur\n\n\n", ID, hod, vyplata);



	}
}
