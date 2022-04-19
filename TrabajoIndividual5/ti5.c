#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main(){
	char c;
	int a;		/* Ancho						*/
	int h;		/* Altura						*/
	int z;		/* Profundidad					*/
	int i,j;	/* Contadores de iteraciones	*/
	int eb;		/* Espacios en blanco			*/

	do{	system("cls");
		printf("ARISTAS VISIBLES PARALELEPIPEDO CON ASTERISCOS\n");
		printf("==============================================\n\n");
		/* Lectura y validacion dimensiones del paralelepipedo */
		do{	printf("Introduzca ancho [3-20]: ");
			scanf(" %d",&a);
		}while((a<3)||(a>20));
		do{	printf("Introduzca alto [3-10]: ");
			scanf(" %d",&h);
		}while((h<3)||(h>10));
		do{	printf("Introduzca profundidad [3-10]: ");
			scanf(" %d",&z);
		}while((z<3)||(z>10));
		printf("\n\n");
	
		j=z-1;			
		while(j>0){
			printf("  ");   
			--j;
		}
		i=1;			
		while(i<=a){
			printf(" *");
			++i;
		}
		printf("\n");

		eb=0;
		i=2;
		while(i<z){          
			j=z-i;
			while(j>0){       
				printf("  "); 
				--j;
			}
			printf(" *");      
			j=2;
			while(j<a){        
				printf("  ");
				++j;
			}
			printf(" *");        
			j=1;
			while(j<=eb){       
				printf("  "); 
				++j;
			}
			printf(" *\n");     
			if(i<h){           
				eb++;
			}
			++i;
		}

		i=1;
		while(i<=a){          
			printf(" *");
			++i;
		}
		j=1;			
		while(j<=eb){         
			printf("  "); 
			++j;
		}
		printf(" *\n");      
		if(z>=h){            
			eb--;
		}
		i=2;
		while(i<h){          
			printf(" *");     
			j=2;
			while(j<a){       
				printf("  ");
				++j;
			}
			printf(" *");     
			j=1;
			while(j<=eb){     
				printf("  ");  
				++j;
			}
			printf(" *\n");   
			if(i+z-1>=h){    
				--eb;
			}
			++i;
		}
	
		i=1;
		while(i<=a){        
			printf(" *");
			++i;
		}
		printf("\n");
		printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		c=toupper(getch());
	}while (c!='N');
	return 0;
}

