#include<stdlib.h>
#include<stdio.h>

#define carre(x) (x) * (x)
int main()
{
	int nbr = 5;
	printf("%d\n", carre(nbr));
	printf("%d\n", carre(nbr + 1));
	// mauvais r�sultat car pas de priorit� op�ratoire 1+5*1+5 il faut mettre des parenth�ses
}