/*
*Autor: Mr.Wizard
*Copyright: 2021
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>
//#include<Wizard.h>


#define ZACIATOCNEPENIAZE 10000


int main()
{
	int PridanePeniaze, Zostatok;


	printf("******************WELCOME TO THE BLACKJACK****************\n\n\n\n\n\nYour starting money is %d\n\n\n\n\n\n", ZACIATOCNEPENIAZE);

	printf("You can add some money if you think you don't have enough!, How much would you like to add?: ");
	scanf("%d", &PridanePeniaze);
	Zostatok = ZACIATOCNEPENIAZE + PridanePeniaze;
	printf("You have now %d€\n\n\n\n\n", Zostatok);

}
