#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float opcion, a, b;
	char exit;
	
	do{
		printf("\t 1.- Suma:\n");
		printf("\t 2.- Resta:\n");
		printf("\t 3.- Multiplicacion:\n");
		printf("\t 4.- Division:\n");
		printf("\t 5.- Potencia:\n");
		printf("\t 6.- Raiz:\n");
		printf("\t 7.- Salir:\n");
		
		printf("Elige una opcion: ");
		scanf("%d",&opcion);
	
	switch(opcion){
	case 1: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de a+b es: %d", a+b);
		break;
	
	case 2: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de a-b es: %d", a-b);
		break;
		
	case 3: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de a*b es: %d", a*b);
		break;
		
	case 4: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de a/b es: %d", a/b);
		break;
		
	case 5: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de pow(a,b) es: %d", pow(a,b));
		break;
		
	case 6: printf("Ingrese el valor de a");
			scanf("%d", &a);
			printf("Ingrese el valor de b");
			scanf("%d", &b);
			printf("\nEl resultado de sqrt(a)\t\t sqrt(b) es: %d", sqrt(a), sqrt(b);
		break;
		
	default:
		printf("No esta puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nLas %f pulgadas son %f centimetros\n", pul, cm);
	
	return 0;
	}
