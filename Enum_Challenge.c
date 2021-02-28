#include<stdio.h>
#include<conio.h>

int main()
{
	 enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	 enum Company xerox = XEROX;
	 enum Company google = GOOGLE;
	 enum Company ebay = EBAY;

	printf("Hodnota premennej xerox je: %d\n", xerox);
	printf("Hodnota premennej google je: %d\n", google);
	printf("Hodnota premennej ebay je: %d\n", ebay);

	return 0;
	
}
