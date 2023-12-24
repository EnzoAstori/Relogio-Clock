#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

float x , y, mult, div , som , sub , pot ;
int z;

do{
printf("\n______________________________________________________________________");
printf("                 \n\nCalculadora\n\n");
printf("1-Multiplicacao\n2-Divisao\n3-Soma\n4-subtracao\n5-Potencia\n6-Sair");
printf("\n\nDigite o numero correpondente a operacao que deseja: ");
scanf("%i", &z);



switch(z){

	case 1:
	printf("\nDigite os primeiro numero:");
	scanf("%f",&x);
	printf("Digite os segundo numero:");
	scanf("%f",&y);
	mult=x*y;
	printf("\nO resultado eh:%.3f", mult);
	break;
	
	case 2:
	printf("\nDigite o primeiro numero:");
    scanf("%f", &x);

    do{
    printf("Digite o segundo numero:");
    scanf("%f", &y);
    
    if(y==0){
    printf("ERROR: denominador = 0.\n");
    
    }else{
    div=x/y;
    printf("\nO resultado eh: %.3f", div);
    break;
    
    }
    
    }while(1);
    break;
	
    case 3:
	printf("\nDigite os primeiro numero:");
	scanf("%f",&x);
	printf("Digite os segundo numero:");
	scanf("%f",&y);
	som=x+y;
	printf("\nO resultado eh:%.2f", som);
	break;
	
	case 4:
	printf("\nDigite os primeiro numero:");
	scanf("%f",&x);
	printf("Digite os segundo numero:");
	scanf("%f",&y);
	sub=x-y;
	printf("\nO resultado eh:%.2f", sub);
	break;
	
	case 5:
    printf("\nDigite a base:");
    scanf("%f",&x);
    printf("Digite o expoente: ");
    scanf("%f", &y);
    pot=pow(x,y);
    printf("\nO resultado da eh: %.3f\n", pot);
    break;
		
	case 6:
	printf("\n....()__()_V....Adios");
	return 0;
	break;
	
	default:
    printf("Opcao invalida,tente novamente.\n");
	
	}

	
	}while(z!=6);

}
