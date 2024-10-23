#include <stdio.h>
#include <math.h>


int main() {

//declaração de variável

float lado1;
float lado2;
float lado3;

//saida e entrada

printf("informe o lado 1 do triangulo: ");
scanf("%f", &lado1);

printf("informe o lado 2 do triangulo: ");
scanf("%f", &lado2);

printf("informe o lado 3 do triangulo: ");
scanf("%f", &lado3);

//Equilátero

if (lado1==lado2&&lado2==lado3){
printf("Equilatero");
}

//Escaleno

else if(lado1!=lado2&&lado2!=lado3){
printf("Escaleno");
}

//Isósceles

else {
printf("Isosceles");
}
}
