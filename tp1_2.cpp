#include <stdio.h>
#include <stdlib.h>

int n_cuadrado_1(int a);
void n_cuadrado_2(int a);
void variable_recibida_3(int a);
void invertir (int a,int b);
void ordenado(int a ,int b);

int main(){
	
	int num;
	
	printf("escriba un numero:");
	scanf("%d",&num);
	printf("el numero al cuadrado es :%d \n",n_cuadrado_1(num));
	
	n_cuadrado_2(num);
	
	variable_recibida_3(num);
	
	//---------------------------------
	int num1,num2;
	printf("ingrese el valor de la variable num1:");
	scanf("%d",&num1);
	fflush(stdin);
	printf("\n ingrese el valor de la variable num2:");
	scanf("%d",&num2);
	
	printf("\nvalor de num1=%d \n valor de num2=%d\n\n",num1,num2);
	
	invertir(num1,num2);
	
	ordenado(num1,num2);
	
	return 0;
}

int n_cuadrado_1(int a){
	
	int num_elevado;
	
	num_elevado=a*a;
	
	return num_elevado ;
}

void n_cuadrado_2(int a){
	
printf("numero elevado al cuadrado es %d \n",a*a);	
	
}

void variable_recibida_3(int a){
printf("posicion : %p\n",&a);
printf("Contenido de la variable :%d\n\n\n",a);
}

void invertir (int a,int b){
int aux;

aux=a;
a=b;
b=aux;

printf("invertir\n\n la variable num1=%d\n la variable num2=%d \n\n",a,b);
}

void ordenado(int a ,int b){
	if(a<b){
		printf("ORDEN \n %d-%d\n",a,b);
		
	}
	else{
		printf("ORDEN\n %d-%d\n",b,a);
	}
	
}

//-------EL ULTIMO PUNTO NO LO ENTIENDO---------