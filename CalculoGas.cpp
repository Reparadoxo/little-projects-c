#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float horas, velocidade, distancia, litros;
	printf("Digite a duração da viagem em HORAS: ");
	scanf("%f", &horas);
	printf("Digite a velocidade do veículo em KM/H: ");
	scanf("%f", &velocidade);
	distancia = horas * velocidade;
	litros = distancia / 12;
	printf("A distância percorrida pelo veículo foi de %.2f Km/h e os litros de gasolinas gasto foi de %.2f litros.,", distancia, litros);
	return(0);
}
