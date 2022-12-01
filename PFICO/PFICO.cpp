#include <stdio.h>
//Progrma que calcula el ISTP
void main(void)
{
    char zona;
    float sueldoBruto,
    float sueldoNeto; 
    float porcentaje;

    printf("Sueldo: ");
    scanf_s("%f", &sueldoBruto);
    //El problema planteado contiene 2 zonas A y B, a continuacion se pide la zona
    printf("Zona: ");
    scanf_s("%c", &zona);

    //Se empieza un estructura de control 
    if (zona == 'A')
    {
        if (sueldoBruto >= 1850 && sueldoBruto < 3000)
        {
            porcentaje = .1;
        }
        else
        {
            if (sueldoBruto >=3000 && sueldoBruto<5000)
            {
                porcentaje = .2;
            }
            else
            {
                if (sueldoBruto >= 5000) 
                { 
                    porcentaje = .333; 
                }
                else 
                {
                    porcentaje = 0;
                }

            }
        }
    }
    else 
    {
        if (sueldoBruto >= 1850 && sueldoBruto < 2500) 
        {
            porcentaje = .1;
        }
        else 
        {
            if (sueldoBruto >= 2500 && sueldoBruto < 4500)
            {
                porcentaje = .2;
            }
            else
            {
                if (sueldoBruto >= 4500)
                {
                    porcentaje = .333;
                }
                else
                {
                    porcentaje = 0;
                }
            }
        }
    }
}