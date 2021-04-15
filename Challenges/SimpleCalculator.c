#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	printf("Kalkulacka by Mr.Wizard \n\n\n\n");

	float a, b, vysledok;
	char znak;

	printf("Co chces spocitat?: ");
	scanf("%f %c %f", &a, &znak, &b);
	

	switch (znak)
	{
	case '+':
		vysledok = a + b;
		printf("\nvysledok je %.2f", vysledok);
		break;
	case '-':
		vysledok = a - b;
		printf("\nvysledok je %.2f", vysledok);
		break;
	case '*':
		vysledok = a * b;
		printf("vysledok je %.2f", vysledok);
		break;
	case '/':
		vysledok = a / b;
		printf("\nvysledok je %.2f", vysledok);
		break;
	default:
		printf("\nzadal si zly parameter");
		break;
	}
	
	return 0;
}
