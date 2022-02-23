/*
*Autor: Mr.Wizard
*Copyright: 2021
*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, r, v, objekty;
    float s, o;
    float pi = 3.14;
    printf("\n Vpocet 2D telies, vyber si cislo co chces aby som vypocital");
    printf("\n 1.stvorec");
    printf("\n 2.obdlznik");
    printf("\n 3.kruh\n");
    scanf("%d", &objekty);

    switch (objekty)
    {
    case 1:
        printf("Zadaj stranu a: \n");
        scanf("%d", &a);
        s = a * a;
        o = 4*a;
        printf("Obsah stvorca je %f a obvod je %.2f ", s, o);
        break;
    case 2:
        printf("Zadaj stranu a: \n");
        scanf("%d", &a);
        printf("Zadaj stranu b: \n");
        scanf("%d", &b);

        o = 2 * (a + b);
        s = a * b;
        printf("Obsah obdlznika je %.2f a obvod je %.2f ", s, o);
        break;
    case 3:
        printf("zadaj mi polomer r: \n");
        scanf("%d", &r);

        o = 2 * pi * r;
        s = pi * r * r;

        printf("Obsah kruhu je %.2f a obvod je %.2f ", s, o);
        break;
        
    default:
        printf("zadal si nespravne cislo alebo taky objekt neviem zatial vypocitat");
        break;
    }


} 
