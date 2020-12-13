#include <stdlib.h>
#include <stdio.h>


int main() {

	//D�claration des variables
	unsigned int valeur = 2868838400;
	unsigned int taille = sizeof(valeur);

	//Question a : afficher le nombre d'octets utilis� pour coder un entier non sign�
	printf("Il faut %d octets pour coder un entier non sign�.\n", taille);

	//Question b : afficher le nombre de bits utilis� pour coder un entier non sign�
	printf("Ainsi il faut %d bits pour coder un entier non sign�.\n", 8 * taille);

	//Question c/d : afficher la valeur de chaque bit pour l'entier consid�r�.
	int k = 0;
	for (k ; k < 10; k++) {
		printf("bit  %d : ",k);
		if (((valeur >> k) & 1) == 1) {
			printf("ON\n");
		}
		else {
			printf("OFF\n");
		}
	}
	for (k ; k < 32; k++) {
		printf("bit %d : ", k);
		if (((valeur >> k) & 1) == 1) {
			printf("ON\n");
		}
		else {
			printf("OFF\n");
		}
	}

	//Question e : fait � la calculatrice, on obtient le r�sultat de d�part.

	//Question f : message de courtoisie 
	printf("Bye !");
}