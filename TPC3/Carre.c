#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x) * (x)	//Il faut rajouter des parenthèses car Visual Studio ne les considère pas automatiquement
							//Sans parenthèse voici l'opération : carre(Nb+1) = Nb + 1 * Nb + 1 = Nb + Nb + 1 = 2*Nb + 1

int main() {
	int Nb = 5;
	printf("%d", carre(Nb));
	printf("\n%d", carre(Nb + 1));
}

