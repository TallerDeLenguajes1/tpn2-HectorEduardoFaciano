#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 4 
#define M 5 

int f,c;
double matriz[N][M];
double *numero = &matriz[0][0];

int main(){

    for (f=0; f<N; f++){
        for (c=0; c<M; c++){
            printf("[%d][%d] ", f, c);
            printf("%.2f   ", *(numero+f * M+c));
            printf("\n");
        }
        printf("\n\n");
    }
    getch();
    return 0;
}