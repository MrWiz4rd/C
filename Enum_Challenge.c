#include<stdio.h>
#include<conio.h>

int main()
{
	 enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	 enum Company prvy = XEROX;
	 enum Company druhy = GOOGLE;
	 enum Company treti = EBAY;

	printf("%d\n", prvy);
	printf("%d\n", druhy);
	printf("%d\n", treti);

	return 0;
	
}
