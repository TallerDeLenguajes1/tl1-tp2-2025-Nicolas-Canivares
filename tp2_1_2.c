#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main()
{
    srand(time(NULL));
    // codigo a completar
    int i;
    double vt[N], *punt = vt;
    for(i = 0;i<N; i++)
    {
        punt[i]=1+rand()%100;
        printf("\n%f", punt[i] );
    }    

    return 0;
}


