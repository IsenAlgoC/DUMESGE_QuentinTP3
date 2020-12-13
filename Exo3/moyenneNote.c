#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define NBMAXNOTES 30

int main() {

	//Déclaration des variables
	float tableau[30];
	float tmpNote = 0;
	int compteur = 0;
	char rep = 'N';
	int NbAbsence = 0;
	int invalide = 0;
	float moyenne = 0;
	int stop = 0;

	//Initialisation du tableau avec -2

	for (int k = 0; k < NBMAXNOTES; k++) {
		tableau[k] = -2;
	}

	do {
		printf("Entrer la note numero %d : ", compteur);
		scanf_s("%f", &tmpNote);
		if ((tmpNote < 0.00) || (tmpNote > 20.00)) {
			printf("Vous avez tape une note invalide, l'eleve est-il (A)bsent ou voulez vous arreter la saisie (O)ui (N)on ?\n");
			rep = _getch();
			rep = toupper(rep);
			switch (rep) {
			case 'A':
				NbAbsence += 1;
				tableau[compteur] = tmpNote;
				compteur += 1;
				break;
			case 'O':
				stop = 1;
				break;
			default:
				invalide++;
			}
		}
		else {
			tableau[compteur] = tmpNote;
			moyenne += tmpNote;
			compteur += 1;
		}
	} while ((compteur < NBMAXNOTES) && (stop == 0));

	moyenne = moyenne / (compteur - NbAbsence);
	printf("\nLa moyenne des %d notes est : %.2f",compteur - NbAbsence, moyenne);
	printf("\n\nIl y a %d absences.", NbAbsence);

	//On recherche la plus petite et la plus grande valeur donné dans le tableau 

	float PlusPetit = tableau[0];
	float PlusGrand = tableau[0];
	int k = 1;
	while (k < compteur) {
		if (tableau[k] < 0) {
			k++;
		}
		else if (tableau[k] < PlusPetit) {
			PlusPetit = tableau[k];
			k++;
		}
		else if (tableau[k] > PlusGrand) {
			PlusGrand = tableau[k];
			k++;
		}
	}
	printf("\nLa plus petite note est %.2f, la plus grande est %.2f\n", PlusPetit, PlusGrand);

	//Calcul de l'écart-type

	k = 0;
	float ecartType = 0;
	while (k < compteur) {
		ecartType += (tableau[k] - moyenne) * (tableau[k] - moyenne);
	}
	ecartType = sqrt(ecartType / (compteur - 1));
	printf("L'ecart type vaut : %.2f\n", ecartType);

	//Afficher le tableau 

	printf("N° note | Valeur note");
	if (compteur < 10) {
		for (int i = 10; i < compteur; i++) {
			printf("%d      | %.2f", i, tableau[i]);
		}
	}
	else {
		for (int i = 0; i < 10; i++) {
			printf(" %d      | %.2f", i, tableau[i]);
		}
		for (int i = 10; i < compteur; i++) {
			printf("%d      | %.2f", i, tableau[i]);
		}
	}

	//Afficher un classement

	

	int index[30];
	for (int i = 0; i < NBMAXNOTES; i++) {
		index[i] = i;
	}

	int tmp, echange;
	echange = 1;

	while (echange == 1)
	{
		echange = 0;
		for (int i = 0; i < NBMAXNOTES; i++)
			if (tableau[i] < tableau[i + 1]) {
				tmp = tableau[i];
				tableau[i] = tableau[i + 1];
				tableau[i + 1] = tmp;

				tmp = index[i];
				index[i] = index[i + 1];
				index[i + 1] = tmp;

				echange = 1;
			}
	}

	printf("Rang: | N° note    Valeur note");
	for (int i = 0; i < compteur; i++) {
		printf("%d        %d           %d\n", i, index[i], tableau[i]);
	}

	return(EXIT_SUCCESS);
}