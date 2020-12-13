#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x) * (x)   //il faut rajouter des parenthèses car Visual Studio ne les considère pas automatiquement


int main() {
	int Nb = 5;
	printf("%d", carre(Nb));
	printf("\n%d", carre(Nb + 1));
}

