#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int fila = 15, columna = rand()%11 + 5;
	int matriz[fila][columna], pares[fila];
	int f, c, aux;
	int *puntMatriz = &matriz[0][0], *puntPar = &pares[0];
	
	for (f = 0; f < fila; f++){
		aux = 0;
		for (c = 0; c < columna; c++){
			*puntMatriz = rand()%900 + 100;
			printf("[%d][%d] ", f, c);
            printf("%d \n",*puntMatriz);
			if(*puntMatriz%2 == 0){ 
				aux++;
			}
			puntMatriz++; 
		}
		*puntPar = aux; 
		puntPar++;
		printf("\n\n");
	}	
	for(f = 0; f < fila; f++){
		printf("\nPares En Fila [%d]: %d", f, pares[f]);
	}
    getch();
	return 0;
}