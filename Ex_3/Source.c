#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define nbmaxnotes 30;
# define carre(x) (x)*(x)
void permute(int* a, int* b) {
	int tpm;
	tpm = *a;
	*a = *b;
	*b=tpm;
}

int main()
{
	int tableau[100];
	int i = 0;
	float note;
	char reponse;
	int index[100];
	int copie[100];
	int j;
	float somme = 0;
	float sum=0;
	float moyenne;
	int absence = 0;
	float ecarttype; 
	int  notevalide = 0;
	for (i = 0; i < 100; i++)
	{
		tableau[i] = -2;
		//printf("%d", tableau[i]);
	}
	for (i = 0; i < 30; i++)
	{

		printf("Entrez la note indice %d:\n", i);
		scanf_s("%f", &note);
		if (note < 0 || note>20)
		{
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes?A/O/N: \n");
			reponse = _getch();
			switch (reponse)
			{
			case 'O':
				i = 31;
				break;
			case 'N':
				i = i - 1;
				break;
			case 'A':
				absence = absence + 1;
				note = -1;
				break;
			default:
				break;

			}
			
		}
		else
		{
			notevalide = notevalide + 1;
			tableau[i] = note;
			somme = somme + note;
		}
		

		}






	moyenne = somme / notevalide;
	printf("%f\n", moyenne);
	printf("Le nombre de note valide est %d\n", notevalide);
	printf("Le nombre d'absence est %d\n", absence);
	
	for (i = 0; i < notevalide; i++)
	{
		sum = sum + carre(tableau[i] - moyenne);
	}
	ecarttype = sqrt(sum /(notevalide - 1));
	printf("L'ecart type est %f\n", ecarttype);

	for (i = 0; i < notevalide; i++)
	{
		printf("%d     %d\n  ", i, tableau[i]);
	}

	for (i = 0; i < 100; i++)
	{
		copie[i] = tableau[i];
	}
	for (i = 0; i < notevalide; i++)
	{
		for (j = 0; j < notevalide-1; j++)
		{
			if (tableau[j] > tableau[j + 1])
			{
				permute(&tableau[j], &tableau[j + 1]);
			}
		}
}
	printf("\n\n rang   valeur note\n");
	for (i = 0; i < notevalide; i++)
	{
		printf("%d     %d\n  ",i, tableau[i]);
	}

}