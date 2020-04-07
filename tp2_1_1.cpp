#include <stdio.h>
#include <conio.h>
#define N 4
#define M 5

int main(){
    int f,c;
    double mt[N][M];
    
    for(f = 0; f<N; f++){
        for(c = 0; c<M; c++){ 
            printf("[%d][%d] ", f, c);
            _cprintf("%lf ", mt[f][c]);
            printf("\n");
        }
        printf("\n\n");
    }
    getch();
    return 0;
}
