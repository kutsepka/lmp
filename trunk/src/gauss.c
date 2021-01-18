#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
    int eliminate(Matrix *mat, Matrix *b){ 
	for(int k=0; k < mat->c-1; k++){
		for(int w=k+1; w < mat->r; w++){
			if(mat->data[w][k]== 0) continue;
			double x = mat->data[w][k]/mat->data[k][k];
			for(int i=k; i < mat->c; i++){
				mat->data[w][i] = mat->data[w][i] - mat->data[k][i]*x; 
			}
			b->data[w][0] = b->data[w][0] - b->data[k][0]*x;
		}
		if(mat->data[k][k]==0) return 1;
	}

		return 0;
}

