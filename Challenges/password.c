/*
*Autor: Mr.Wizard
*Copyright: 2021
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{	
	int heslo = 7355608;
	int h;
	int pokusy = 0;

	printf("pre vstup zadajte heslo: ");
	while(1)
	{
		scanf("%d", &h);

		if (h != heslo)
		{
			printf("\nheslo je nespravne, zadaj ho znova: ");
			pokusy++;
			
			if (pokusy == 5)
			{
				printf("\n\nVela krat si po sebe zadal zle heslo musis pockat 5 sekund potom to skus znova\n\n\n\n");				
				return;
			}

		} 
		else
		{
			printf("\nheslo je spravne!\n\n");
			return;
		}
	}
}
