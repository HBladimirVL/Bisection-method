#include <iostream>
#include <stdio.h>
#include <math.h>

// BY BLADIMIR LOPEZ

int main(int argc, char** argv) {
	float a,b,fa,p,fp,faXfp;
	int iteraciones,i=1;
	
	printf("      ---------------------------------------------------------\n");
	printf("                               BIENVENIDO\n");
	printf("            METODO DE LA BISECCION PARA OBTENER UNA RAIZ\n");
	printf("      ---------------------------------------------------------\n\n");
	printf("      Funcion que se evaluara sera: f(x)= Raiz(x) - Cos(x)\n");
    printf("      Con tolerancia: 0.0001 \n\n");
	printf("      Ingrese limite inferior A: ");scanf("%f",&a);
	printf("      Ingrese limite inferior B: ");scanf("%f",&b);
	printf("      Ingrese numero de iteraciones: ");scanf("%d",&iteraciones);
	printf("\n      i       a          fa          b          p          fp\n");
	
	while(i < iteraciones) {
		fa = sqrt(a)-cos(a);
		p = (a+b)/2;
		fp = sqrt(p)-cos(p);
		printf("      %d   %f   %f   %f   %f   %f\n",i,a,fa,b,p,fp);
		if((b-a)/2<0.0001){
			printf("\n      EXITO EN LA %d ITERACION, P = %f \n\n",i,p);
			system("pause");
			exit(-1);	
		}
	    i=i+1;
		faXfp=fa*fp;
			if(faXfp>0){
				a=p;
			}else{
				a=a;
			}
			if(faXfp>0){
				b=b;
			}else{
				b=p;
		}
	}
	return 0;
}
