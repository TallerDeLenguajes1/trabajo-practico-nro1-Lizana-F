#include <stdlib.h>
#include <stdio.h>
//
int main(){
	
	int a=10 ,*puntero_a;
	puntero_a=&a;
	
	printf("contenido de la variable a:%d\n\n",a);
	printf("1-contenido del puntero_a:%d \n 2-direccion de memoria almacenada del  puntero:%p \n 3-direccion de memoria de la variable a:%p \n 4-direccion de memoria del puntero:%p\n\n",*puntero_a,puntero_a,&a,&puntero_a);
	
	printf("\n -El punto 2 y 3 son iguales ya que el 3 puntero esta guardando la direccion de memoria del la variable a \n");

	printf(" -En el 4 se muestra la direccion de memoria del puntero \n");

	printf(" cantidad de bites que ocupa la variable 'a'=%d",sizeof(a));//--->muestra la cantidad de bites que ocupa cada tipo de variable
	
	return 0;

}