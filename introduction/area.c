#include<stdio.h> //Input Output
#include<math.h>

#define PI 3.1416 //Definiendo una constante

void main(){
	float area, radio; //Declarando variables de tipo flotante
	radio = 5; //Asignando valor a variable-radio
	area = PI * pow(5,2); //Asignando el resultado de la operación a variable area
	printf("Area\n"); //Imprimieno titulo
	//Imprimiendo resultado
	printf("Area de Circulo con radio 5: %f", area);
	return 0; 
}
