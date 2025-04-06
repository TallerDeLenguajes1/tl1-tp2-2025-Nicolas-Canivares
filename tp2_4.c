#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
    } typedef compu;

    void listarPCs(compu pc[], int cantidad);
    void mostrarMasVieja(compu pcs[], int cantidad);

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int velocidad, anio, cantNucleos, tipo;
    char *punt = &tipos[0][0];
    compu compus[5];

    //cargar Struct
    for (int i = 0; i < 5; i++)
    {
        //velocidad aleatorio
        velocidad = 1 + rand() % 3;
        //anio aleatorio    
        anio = 2015  + rand() % (2025 - 2015 + 1);
        //cantNucleos aleatorios
        cantNucleos = 1 + rand() % 8;
        //tipo cpu aleatorio
        tipo = rand() % 5;
        compus[i].velocidad = velocidad;
        compus[i].anio =  anio;
        compus[i].cantidad_nucleos = cantNucleos;
        compus[i].tipo_cpu = tipos[tipo];
        /* for (int j = 0; j < 10; j++)
        {
            compus[i].tipo_cpu = *(punt + (tipo * 10 + j));
        } */
    }

    listarPCs(compus, 5);
    mostrarMasVieja(compus,5);
    return 0;
}

void listarPCs(compu pc[], int cantidad){

    for (int i = 0; i < cantidad; i++)
    {
        printf("\n---- PC %d ----", i+1);
        printf("\nVelocidad: %dGhz", pc[i].velocidad);
        printf("\nAnio de salida: %d", pc[i].anio);
        printf("\nCantidad de nucleos: %d", pc[i].cantidad_nucleos);
        printf("\nTipo de cpu: ");
        puts(pc[i].tipo_cpu);
        printf("------------------------\n");
    }
}

void mostrarMasVieja(compu pcs[], int cantidad){
    int pcVieja = 0,anioPCVieja = 3000;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < anioPCVieja)
        {
            anioPCVieja = pcs[i].anio;
            pcVieja = i;
        }
        
    }
    
    printf("\n---- PC Mas Antigua ----");
    printf("\nVelocidad: %dGhz", pcs[pcVieja].velocidad);
    printf("\nAnio de salida: %d", pcs[pcVieja].anio);
    printf("\nCantidad de nucleos: %d", pcs[pcVieja].cantidad_nucleos);
    printf("\nTipo de cpu: ");
    puts(pcs[pcVieja].tipo_cpu);
    printf("------------------------\n");

}
