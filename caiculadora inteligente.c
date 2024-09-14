#include<stdio.h>
#include<locale.h>
//prototipos y espacio
void menu();
void suma();
void resta();
void multiplicacion();
void division();
int numero;
int numero2;
int resultado;
 int main(){
 	setlocale(LC_ALL,"spanish");
 	menu();

 }
 //menú
 void menu(){
 	int opc=0,I;
 	
 	while(I==0){
 		printf("\n\t\tMENU\n1-Suma\n2-Resta\n3-Multiplicación\n4-Division\n5-Salir\nOpc: ");
 		scanf("%i",&opc);
 		if(opc==1){//llama a la suma
 			suma();	
		 }
		 if(opc==2){//llama a la resta
		 	resta();
		 }
		 if(opc==3){//llama a la multiplicacion
		 	multiplicacion();
		 }
		 if(opc==4){//llama a la division
		 	division();
		 }
 		if(opc==5){
 			printf("Hasta luego");
 			I=1;
		}
	 }

 }
 void suma(){
 	
 	printf("\ningresa un número:");
	scanf("%i",&numero);

	printf("\ningresa otro número:");
	scanf("%i",&numero2);
	
	resultado=numero+numero2;
	printf("\n%i+%i=%i\n",numero,numero2,resultado);
	 
 	
 }
 //resta
 void resta(){
 	printf("\ningresa un número:");
 	scanf("%i",&numero);
 	
 	printf("\ningresa otro número:");
 	scanf("%i",&numero2);
 	
 	resultado=numero-numero2;
 	printf("\n%i-%i=%i\n",numero,numero2,resultado);	
 }
 //multi
void multiplicacion(){
	
	printf("\ningresa un número:");
	scanf("%i",&numero);
	
	printf("\ningresa otro número:");
	scanf("%i",&numero2);
	
	resultado=numero*numero2;
	printf("\n%ix%i=%i\n",numero,numero2,resultado);
}
//division
void division(){
	
	printf("\ningresa un número:");
	scanf("%i",&numero);
	
	printf("\ningresa otro número:");
	scanf("%i",&numero2);
	
	resultado=numero/numero2;
	printf("\n%i/%i=%i\n",numero,numero2,resultado);
	
}







