#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {
		if((mat->c != mat->r) || (x->r != mat->r) || (x->c != 1) || (b->r != mat->r) || (b->c != 1)) return 2;
	int z = mat->r;
	if (mat->data[z-1][z-1] == 0) 
		return 1; else
			x->data[z-1][0] = b->data[z-1][0]/mat->data[z-1][z-1];

	for (int i = z-2; i >= 0; i--) {
		if (mat->data[i][i] == 0) 
			return 1;
		double ind = 0;
		for(int j = i+1; j <= z-1; j++)
			ind = ind + mat->data[i][j] * x->data[j][0];
			x->data[i][0] = (b->data[i][0] - ind) / mat->data[i][i];
		
	}

				return 0;
}


