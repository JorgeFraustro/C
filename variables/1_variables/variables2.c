#include <stdio.h>
#include <math.h>

float a,b,c,d; //Declarando variables
int a1,b1,c1;
int main()
{
	
	printf("Dame el\"primer\" numero: ");
	scan ("%f",&a);
	
	printf("\nDame el\"segundo\" numero: ");
	scan ("%f",&b);
	
	printf("Suma\n")
	c = a + b; //Suma o adición
	printf("\t%0.2f + %0.2f = %0.2f\n",a, b, c);
	
	printf("Resta\n")
	c = a - b;
	printf("\t%0.2 - %0.2f = %0.2f\n",a, b, c, d);
	
	printf("Multiplicacion\n")
	c = a * b;
	printf("\t%0.2 * %0.2f = %0.2f\n",a, b, c, d);
	
	printf("Division\n")
	c = a / b;
	printf("\t%0.2 / %0.2f = %0.2f\n",a, b, c, d);
	
	printf("Modulo\n")
	d = a;
	e = b;
	c1 = a1 % b1;
	printf("\tEl modulo de %d/%d = %d\n",a1, b1, c1);
	
	printf("\nRaiz cuadrada");
	c = sqrt(a);
	printf("\tLa Raiz cuadrada de %f es: %f", a,c);
	c = sqrt(b);
	printf("\tLa Raiz cuadrada de %f es: %f", a,c);
	
	printf("\nPotencia\n")
	c = pow (a,b);
	printf("\t%0.2 elevado a la potencia / %0.2f = %0.2f\n",a, b, c, d);
	c = pow (a,b);
	printf("\t%0.2 elevado a la potencia / %0.2f = %0.2f\n",a, b, c, d);
	
	c = (a+b)*(a+b);
	printf("\t%0.2 + %0.2f * %0.2f + %0.2f = %0.2f\n", a, b, a, b, c);	
				
return 0;
}
