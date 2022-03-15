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
    char c; double x1, y1, z1, a, x2, y2, z2, b, x3, y3, z3, c, x, y, z;

    /* Bloque de instrucciones */
    do{ system("cls");
        printf("ESCRIBIR AQUI EL TITULO DEL PROGRAMA\n");
        printf("====================================\n\n");
        /* Instrucciones del algoritmo */
          printf("\nIntroduzca los términos de la primera ecuación (x+y+z=a)");
          scanf("%lf %lf %lf" ,&x1 ,&y1 ,&z1 ,&a);
          printf("Introduzca los términos de la segunda ecuación");
          scanf("%lf %lf %lf" &x2 ,&y2 ,&z2, ,&b);
          printf("Introduzca los términos de la tercera ecuación ");
          scanf("%lf %lf %lf " ,&x3 ,&y3 ,&z3 ,&c);
          /*Reducción de x */
          if(x2!=0){
            x2=x2*x1-x1*x2
            y2=y2*x1-y1*x2
            z2=z2*x1-z1*x2
            b=b*x1-a*x2
          }

          if (x3!=0){
            x3=x3*x1-x1*x3
            y3=y3*x1-y1*x3
            z3=z3*x1-z1*x3
            c=c*x1-a*x3
          }

          /*Reducción de y */
          if (y3!=0){
            y3=y3*y1-y1*y3
            z3=z3*y1-z1*y3
            c=c*x1-a*x3
          }
           
          z=c/z3
          y=(b-z)/y2
          x=(a-y-z)/x1

        printf("\nEl resultado de la ecuación es x=%lf, y=%lf, z=%lf" ,&x ,&y ,&z);


        printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
        c=toupper(getch());
    }while (c!='N');
    return 0;
}
