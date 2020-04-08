#include <stdio.h>
#include <conio.h>

#define N 4
#define M 5

double mt[N][M];

int main(){
<<<<<<< HEAD

    for(int f = 0; f<N; f++)
    {
        for(int c = 0; c<M; c++)
        { 
            printf("[%d][%d] ", f,c);
=======
    
    for(f = 0; f<N; f++){
        for(c = 0; c<M; c++){ 
            printf("[%d][%d] ", f, c);
>>>>>>> Opcion_2
            _cprintf("%lf ", mt[f][c]);
            printf("\n");
        }
        printf("\n\n");
    }
    getch();
    return 0;
}
