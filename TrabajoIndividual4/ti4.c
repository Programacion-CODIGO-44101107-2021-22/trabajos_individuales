/* TI4    */
/* Programa que resuelve sistemas de 3 ecuaciones mediante el método de reducción  */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

/* Declaracion de constantes  */

int main(){
    /* Declaracion de variables */
    char c; 
    int a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, b11, b12, b13, b21, b22, b23, b31, b32, b33, c11, c12, c21, c22, c31, c32, x, y, z, dt;
   

    /* Bloque de instrucciones */
    do{ system("cls");
        printf("sistema de 3 ecuaciones y tres incognitas\n");
        printf("====================================\n\n");
        /* Instrucciones del algoritmo */
          printf("\nIntroduzca los términos de la primera ecuación (x+y+z=a)");
          scanf("%d %d %d %d" ,&a11 ,&a12 ,&a13,&a14);
          printf("Introduzca los términos de la segunda ecuación");
          scanf("%d %d %d %d" ,&a21 ,&a22 ,&a23 ,&a24);
          printf("Introduzca los términos de la tercera ecuación ");
          scanf("%d %d %d %d" ,&a31 ,&a32 ,&a33 ,&a34);
         		dt=a11*a22*a33+a12*a23*a31+a13*a21*a32
		    -a11*a23*a32-a12*a21*a33-a13*a22*a31;
		if(dt==0){
			printf("\nSistema sin solucion unica (incompatible o compatible indeterminado)\n");
		}else{
			
       /* Eliminamos la variable x */
			b11=a21*a12-a11*a22;
			b12=a21*a13-a11*a23;
			b13=a21*a14-a11*a24;
			b21=a31*a12-a11*a32;
			b22=a31*a13-a11*a33;
			b23=a31*a14-a11*a34;
			b31=a31*a22-a21*a32;
			b32=a31*a23-a21*a33;
			b33=a31*a24-a21*a34;
			/* Eliminamos la variable y */
			c11=b21*b12-b11*b22;
			c12=b21*b13-b11*b23;
			c21=b31*b12-b11*b32;
			c22=b31*b13-b11*b33;
			c31=b31*b22-b21*b32;
			c32=b31*b23-b21*b33;
			/* Determinamos el valor de z */
			if(c11){
				z=c12/c11;
			}else{
				if(c21){
					z=c22/c21;
				}else{
					z=c32/c31;
				}
			}
			/* Determinamos el valor de y */
			if(b11){
				y=(b13-b12*z)/b11;
			}else{
				if(b21){
					y=(b23-b22*z)/b21;
				}else{
					y=(b33-b32*z)/b31;
				}
			}
			/* Determinamos el valor de x */
			if(a11){
				x=(a14-a12*y-a13*z)/a11;
			}else{
				if(a21){
					x=(a24-a22*y-a23*z)/a21;
				}else{
					x=(a34-a32*y-a33*z)/a31;
				}
			}
			/* Presentacion de resultados */
			printf("\n\nSoluciones:\n");
			printf("\tx = %15.2f\n",x);
			printf("\ty = %15.2f\n",y);
			printf("\tz = %15.2f\n",z);
		}
		printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		c=toupper(getch());
	}while (c!='N');
	return 0;
}