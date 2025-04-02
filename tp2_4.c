#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
    } typedef compu;

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int velocidad, anio, cantNucleos, tipo;
    compu compus[5];
    //velocidad
    velocidad = 1 + rand() % 3;
    anio = 2015 + rand() % 2024;
    cantNucleos = 1 + rand() % 8;
    tipo = rand() % 5;


    return 0;
}
