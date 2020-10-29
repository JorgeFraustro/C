#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
int r;
float l, a;

printf("Introduce radio (entero): ");
scanf("%d", &r);

l= 2 * M_PI *r;
a= M_PI * pow (r,2);

/*Para truncar decimales, establecemos el número que necesitamos 
dentro del comando a ejecutar, ejemplo: char[3] */

printf("La longitud de la circunferencia vale %0.3f\n", l);
printf("El área del círculo vale %0.3f\n", a);
}
