#include<stdio.h> //Input Output
#include<math.h>

#define PI 3.1416 //Definiendo una constante

int main(){
	float area, radio; //Declarando variables de tipo flotante
	radio = 5.12; //Asignando valor a variable-radio
	area = PI * pow(5,2); //Asignando el resultado de la operaci�n a variable area
	printf("Area\n"); //Imprimieno titulo
	//Imprimiendo resultado
	printf("Area de Circulo con radio %f: %f/n", radio, area);
	return 0; 
}
