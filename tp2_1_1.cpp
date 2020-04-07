#include <stdio.h>
#include <conio.h>
#define N 4
#define M 5

double mt[N][M];

int main(){

    for(int f = 0; f<N; f++)
    {
        for(int c = 0; c<M; c++)
        { 
            printf("[%d][%d] ", f,c);
            _cprintf("%lf ", mt[f][c]);
            printf("\n");
        }
        printf("\n\n");
    }
    getch();
    return 0;
}
