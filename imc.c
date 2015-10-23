#include<stdio.h>    
int main()                    
{
    int peso=0;           
    float imc=0,altura=0;
    printf("Digite sua peso (em kgs) : ");
    scanf("%d",&peso);
    printf("Qual sua altura? (em metros ex: 1.80)");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    if (imc<18) printf("Voce esta abaixo do peso.\n");
    else if (imc<=25) printf("Voce esta no peso ideal.\n");
    else if (imc<=30) printf("Voce esta acima do peso.\n");
    else  printf("Voce esta obeso.\n");
    system ("pause");
    return 0;
    