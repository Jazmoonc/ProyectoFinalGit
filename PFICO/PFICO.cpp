#include <stdio.h>
//Progrma que calcula el ISTP
void main(void)
{
    char zona;
    float sueldoBruto, sueldoNeto, porcentaje;

    printf("Sueldo: ");
    scanf_s("%f", &sueldoBruto);
    //El problema planteado contiene 2 zonas A y B, a continuacion se pide la zona
    printf("Zona: ");
    scanf_s("%c", &zona);
    //Se e´mpieza un estructura de control 
    if (zona == 'A')
    {
        if (sueldoBruto <= 1850 || sueldoBruto < 3000)
        {
        }
    }
}