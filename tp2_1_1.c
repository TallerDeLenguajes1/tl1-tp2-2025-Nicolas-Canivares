#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main()
{
    srand(time(NULL));
    // codigo a completar
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("\n%f", vt[i]);
    }    

    return 0;
}


