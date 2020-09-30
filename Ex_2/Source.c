#include<stdlib.h>
#include<stdio.h>

int main()
{
	int nbr = 2868838400;
	int bit;
	int i;
	printf("Le nombre entier occupe %d octets\n", sizeof(nbr));
	bit = sizeof(nbr) * 8;
	printf("Le nombre de bits occupés par cet entier est de %d\n", bit);
	for (i = 0; i < 32; i++)
	{
		if (nbr & 1) 
		{
			printf("bit %d : ON\n ", i);
			nbr=nbr>>1 ;

		}
		else if ((nbr&1) == 0)
		{
			printf("bit %d : OFF \n", i);
			nbr=nbr>>1;
		}
		
	}
	printf("Merci, Bye !");


	}
	


