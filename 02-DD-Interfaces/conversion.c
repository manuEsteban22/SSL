#include <stdio.h>
// imprime la tabla Fahrenheit-Celsius
// para fahr = 0, 20, ..., 300 

int fahr = 0, celsius=0;
int const lower = 0 ; // límite inferior de la tabla de temperaturas 
int const upper = 300; // límite superior 
int const step = 20 ; // tamaño del incremento 



void Fahrenheit()
{
    printf(" celsius a fahr \n");
    fahr = lower;
    celsius = 0;
    while(celsius <= upper)
    {
        fahr = (celsius*9 /5)+32;
        printf("%3d\t%6d\n",celsius , fahr);
        celsius = celsius + step;
    }
    
    fahr = lower;  
}



void Celsius()
{
    printf("fahr a celsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
}

}

int main()
{
    Fahrenheit();
    Celsius();
}
