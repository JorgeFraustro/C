#include <math.h>

int main ()
{
	
float a,b,c,P; //Se establecen variables de tipo flotante	

	printf ("Perimetro de un triangulo\n");
	printf ("Calcule la base del tirangulo: ");
		scanf ("%f", &a);
	
	printf ("Calcule la longitud de uno de los lados: ");
		scanf ("%f", &b);
	
	printf ("Calcule la longitud de uno de los lados: ");
		scanf ("%f", &c);
	
P = a + b + c;	
		
	printf ("\n\El perimetro del triangulo vale: %.2f",P);

}
