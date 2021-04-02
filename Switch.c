/*
*Autor: Mr.Wizard
*Copyright : 2021
*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
	int y;

	printf("Aku znamku si dostal?: ");

	scanf("%d", &y);

	switch (y)
	{
	case 1:
		printf("Si vyborny\n");
		break;
	case 2:
		printf("Si chvalitebny\n");
		break;
	case 3:
		printf("Si dobry\n");
		break;
	case 4:
		printf("Si dostatocny\n");
		break;
	case 5:
		printf("Si nedostatocny\n");
		break;
	default:
		printf("Taka znamka neexistuje\n");
		break;
	}
	return 0;
}
