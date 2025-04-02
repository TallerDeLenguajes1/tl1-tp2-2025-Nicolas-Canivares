#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main()
{
    //Funcion para cambiar semilla cada vez que se ejecuta
    srand(time(NULL));
    // codigo a completar
    int i;
    double vt[N], *punt = vt;
    for(i = 0;i<N; i++)
    {
        *punt = 1+rand()%100;
        printf("\n%f", *punt++);
    }    

    return 0;
}
