#include <stdlib.h>
#include <stdio.h>


int main() {

	//Déclaration des variables
	unsigned int valeur = 2868838400;
	unsigned int taille = sizeof(valeur);

	//Question a : afficher le nombre d'octets utilisé pour coder un entier non signé
	printf("Il faut %d octets pour coder un entier non signé.\n", taille);

	//Question b : afficher le nombre de bits utilisé pour coder un entier non signé
	printf("Ainsi il faut %d bits pour coder un entier non signé.\n", 8 * taille);

	//Question c/d : afficher la valeur de chaque bit pour l'entier considéré.
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

	//Question e : fait à la calculatrice, on obtient le résultat de départ.

	//Question f : message de courtoisie 
	printf("Bye !");
}