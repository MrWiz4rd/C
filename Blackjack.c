#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ZACIATOCNEPENIAZE 10000

int main()
{
		int PridanePeniaze, KonecnePeniaze, StavenePeniaze, Zostatok;
	
		
	printf("*****************WELCOME TO THE BLACKJACK****************\n\n\n\n\n\n");
	printf("Your starting money is %d\n\n\n\n\n", ZACIATOCNEPENIAZE);
	printf("How much money you would like to add?: ", PridanePeniaze);
	scanf("%d", &PridanePeniaze);
	
	KonecnePeniaze = ZACIATOCNEPENIAZE + PridanePeniaze;
	
	printf("Your money is now %d\n\n", KonecnePeniaze);
	
	printf("How much money do you want to bet?: ");
	scanf("%d", &StavenePeniaze);
		
	Zostatok = KonecnePeniaze - StavenePeniaze;
	printf("You bet %d and you have %d money left", StavenePeniaze, Zostatok);
	
	int kocka[6] = {1, 2, 3, 4, 5, 6};
	


	
	
		
}
