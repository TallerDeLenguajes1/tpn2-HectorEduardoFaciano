#include <stdio.h>
#include <conio.h>
#define N 4
#define M 5

int f,c;
double mt[N][M];

int main(){
    for(f = 0; f<N; f++)
    {
        for(f = 0; f<M; f++)
        { 
            _cprintf("%lf ", mt[f][c]);
        }
        _cprintf("\n");
    }
    getch();
    return 0;
}
