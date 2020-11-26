#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int suma(int entero1, int entero2){ //Declarando e implementación de función
	int resultado = 0;
	resultado = entero1 + entero2;  // 10 + 5 return resultado;
	return resultado;
	
int resta(int entero1, int entero2){ 
	int resultado = 0;
	resultado = entero1 - entero2;  
	return resultado;
	
int division(int entero1, int entero2){
	int resultado = 0;
	if (entero2 ==0){		
	}else{
	resultado = entero1 / entero2; 
	return resultado;
	
int multiplicacion(int entero1, int entero2){ 
	int resultado = 0;
	resultado = entero1 * entero2;  
	return resultado;

int portencia(int entero1, int entero2){ 
	int resultado = 0;
	resultado = pow(entero1, entero2); 
	return resultado;
	
int raiz(int entero1, int entero2){
	int resultado = 0;
	resultado = sqrt= (entero1), sqrt= (entero2);  
	return resultado;
	
int factorial(int entero1, int entero2){
	int resultado = 0;
	resultado = factorial=1;<=numero;i++;
	factorial *=i  
	return resultado;
}

int main()
{
	//Declarando variables
	int opcion;
	float n1, n2, resultado;
	
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Factorial\n");
	printf("\t 8.- Salir\n");
	scanf("%d",&opcion);
	system("cls");
	
	if(opcion==6){
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
	}
	else if(opcion>=7){
	}
	else{
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
		printf("\nDame el segundo valor: ");
		scanf("%f", &n2);
	}

	//Estructura de control de selección multiple
	switch(opcion)
	{
	case 1:
		resultado = n1 + n2;
		printf("%f", suma);
		break;
	case 2:
		printf("%f", resta);
		break;
	case 3: 
		if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado = n1 / n2;
		printf("%f", resultado);
		}
		break;
	case 4: 
		printf("%f", multiplicacion (n1, n2));
		break;
	case 5: 		
		printf("%f", potencia (n1, n2));
		break;
	case 6: 
		if(n1<0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(n1);
			printf("%f", resultado);
		}
		break;
	case 7: 		
		printf("%f", factorial (i=1; i<=);
		break;
	default:
		printf("Salir");
		exit(0);
	}	//Sale break
} 
