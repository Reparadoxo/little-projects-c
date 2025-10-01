#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	//Adds the value of multiple positions directly
	int v[10] = {5, 7, 9, 54, 5};
	
	//Reading the array
	for (int i = 5; i < 10; i++) {
		printf("Digite um valor da posição %d: ", i);
		//Use the control variable "i"
		scanf("%d", &v[i]);
	}
	
	//Printing the array
	for (int i = 0; i < 10; i++){
		//Não vai o &
		printf("%d ", v[i]);
	}
	//Another way to attribute the value in a position
	v[2] = 87;
	printf("%d ", v[2]);
	return 0;
}

