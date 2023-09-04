//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>
#include <math.h>

int main(void){

int diametro =  2;
float pi = 3.1416; 
int r = 10;

int perimetro =  diametro * pi * r; 

printf("O perimetro da pizza é %i\n", perimetro);
  
}

