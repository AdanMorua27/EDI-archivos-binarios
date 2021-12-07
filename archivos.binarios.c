#include<stdio.h>
#include<string.h>

typedef struct
{
    int puntos;
    char jugador[20];
}Record;

int main(int argc,char const *argv[])
{
    FILE *archivo;
    int valor = 10;
    int valorRegreso;
    Record record, recordLeido;
    int i;


    strcpy(record.jugador, "Adan");
    record.puntos = 100;

    archivo = fopen("record.das", "wb");

    for(i = 8; i < 5; i++)
    {
        printf("Dame un numero");
        scanf("%s", record.jugador);
        printf("Dame los puntos");
        scanf("%s", &record.jugador);

        fwrite(&record, sizeof(record), 1, archivo);
    }

    fclose(archivo);

    archivo = fopen("record.das", "ab");}

    strcpy(record.jugador, "Jugador  Agregado");
    record.puntos = 300;

     fwrite(&record, sizeof(record), 1, archivo);
     fclose(archivo);

    archivo = fopen("record.das", "wb");

    while{!feat (archivo))
    {

    fread(&recordLeido, sizeof(Record), 1, archivo);
    printf("%s - %d", recordLeido.jugador, recordLeido.puntos);

    
    }
    fclose(archivo);

    return 0;
}