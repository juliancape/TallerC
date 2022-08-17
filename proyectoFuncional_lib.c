/********************
*FIRST WORKSHOP C
*Name: Julian Cardenas
*Subject: Parallel and Distributed Computing (II)
*Date: 16/08/2022
********************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*******1er punto********/
void calcularProducto(){
int a,b;
printf("\nIngrese primer entero: ");
scanf("%d", &a);
printf("\nIngrese segundo entero: ");
scanf("%d", &b);
printf("\nEl producto entre %d y %d es: %d \n",a,b,(a+b));
}
/*******2do punto********/
void conversorDias(){
int dias;
printf("\nIngrese dias: ");
scanf("%d", &dias);
printf("\nDias: %d, anios: %d, semanas: %d ", dias, dias/365, dias/7);
}
/*******3er punto********/
void calcularDistancia(){
int x1, x2, y1, y2;
printf("\nIngrese x1: ");
scanf("%d",&x1);
printf("\nIngrese y1: ");
scanf("%d",&y1);
printf("\nIngrese x2: ");
scanf("%d",&x2);
printf("\nIngrese y2: ");
scanf("%d",&y2);


 float d = sqrt (pow ((x1-x2), 2) + pow ((y1-y2), 2)); 
printf("\nLa distancia entre p1 y p2 es: %.2f  \n",d);
}
/*******4to punto********/
void numerosNaturales(){
	printf("\nLos 10 primeros numeros naturales: ");
	int i=1;
	for(i; i<=10; i++){
		printf("[%d] ",i);
	}
	printf("\n");
}
/*******5to punto********/
void triangulo(){
	int n;
	printf("\nIngrese cantidad de lineas del triangulo: ");
	scanf("%d",&n);
	if (n>14){
		 printf("Error\n");
	}else{
		int x=1;
		int aux;

		for (x; x<=n;x++){
			for(aux=1; aux<=x;aux++){
				printf("*");
			}
			printf("\n");
		}	
	}
}
/*******6to punto********/
void matrizUnos(){
	int n;
	printf("\nIngrese tamanio matriz: ");
	scanf("%d",&n);
	if(n>=8){
		printf("Error\n");
	}else{
		int size=n*n;
		int a[size];
		int i, j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i+j*n]=1;
			}
		}
		impresionMatriz(a,n);
		}
	
}
/*******7mo punto********/
void initMM(){
	int n;
	printf("\nIngrese tamanio matriz: ");
	scanf("%d",&n);
	if(n>=8){
		printf("Error\n");
	}else{
		int size=n*n;
		int a[size];
		int i,j;
		
		for( i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i+j*n]=rand() % 10;		
			}
		}
		impresionMatriz(a ,n);
	}
}
/*******8vo punto********/
void sumaMM(){
	
	int n;
		printf("\nIngrese tamanio matriz: ");
		scanf("%d",&n);
		if(n>=8){
			printf("Error\n");
		}else{
			int size=n*n;
			int a[size];
			int b[size];
			int c[size];
			int i,j;
			
			for( i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					a[i+j*n]=rand() % 10;	
					b[i+j*n]=rand() % 10;	
				}
			}
			impresionMatriz(a ,n);
			impresionMatriz(b,n);
			
			for(i=0;i<n*n;i++){			
			c[i]=a[i]+b[i];
			
		    }
		    printf("El resultado de sumar dos matrices:\n");
			impresionMatriz(c,n);
		}
		
}
/*******9no punto********/
void restaMM(){
	int n;
	printf("\nIngrese tamanio matriz: ");
	scanf("%d",&n);
	if(n>=8){
		printf("Error\n");
	}else{
		int size=n*n;
		int a[size];
		int b[size];
		int c[size];
		int i,j;
			
		for( i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i+j*n]=rand() % 10;	
				b[i+j*n]=rand() % 10;	
			}
		}
		impresionMatriz(a ,n);
		impresionMatriz(b,n);
		
		for(i=0;i<n*n;i++){			
		c[i]=a[i]-b[i];
		
		}
	    printf("El resultado de restar dos matrices:\n");
		impresionMatriz(c,n);
	}
		
}
/*******10mo punto********/
void multiMM(){
	int aux=0;
	int i,j,k, n;
	printf("\nIngrese tamanio matriz: ");
	scanf("%d",&n);
	if(n>=8){
		printf("Error\n");
	}else{
		int size=n*n;
		int a[size];
		int b[size];
		int c[size];

		for( i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i+j*n]=rand() % 10;	
				b[i+j*n]=rand() % 10;	
			}
		}
		impresionMatriz(a ,n);
		impresionMatriz(b,n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				aux=0;
				for(k=0;k<n;k++)
				{
					aux+=a[j+k*n]*b[k+i*n];
				}
				c[j+i*n]=aux;
			}
		}
		printf("El resultado de multiplicar dos matrices es:\n");
		impresionMatriz(c,n);
	}
}
/*******Imprimir matriz****/
void impresionMatriz(int a [],int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i+j*n]);
		}
		printf("\n");
	}
	printf("\n");
}

void menu(){
printf("1. Calcular producto \n");
printf("2. Conversor de dias en anios, semanas y dias. \n");
printf("3. Calcular distancia entre dos puntos. \n");
printf("4. Calcular los 10 primeros naturales. \n");
printf("5. Generar patron rectangulo triangulo. \n");
printf("6. Generar matriz de unos. \n");
printf("7. Generar matriz con tamanio NxN de numeros aleatorios. \n");
printf("8. Suma de matrices de tamanio NxN. \n");
printf("9. Resta de matrices de tamanio NxN. \n");
printf("10. Producto de matrices de tamanio NxN. \n");
}

void seleccion(){
int val=0;

while (val<11 && val>=0 ){
menu();
printf("Ingrese opcion: ");
scanf("%d", &val);
switch (val) {
   case 1:
     calcularProducto();
     break;
   case 2:
     conversorDias();
     break;
   case 3:
   	 calcularDistancia();
   	 break;
   case 4:
   	 numerosNaturales();
   	 break;
   case 5:
   	 triangulo();
   	 break;
   case 6:
   	 matrizUnos();
   	 break;
   case 7:
   	 initMM();
   	 break;
   case 8:
   	 sumaMM();
   	 break;
   case 9:
   	 restaMM();
   	 break;
   case 10:
   	 multiMM();
   	 break;
   default:
    printf("Error");
     break;
   
}
system("pause");
system("cls");

 }


}


