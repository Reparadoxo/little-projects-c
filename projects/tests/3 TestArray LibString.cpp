#include <stdio.h>
#include <string.h>

/*Another way to manipulate strings with the library string, there are some useful functions as strcpy, that copies a string and another strcat that concatenates others strings into one*/

int main() {
	char nome[20] = "Lambarildo";
	char nome1[20] = "Peixe";
	char completo[40];
	strcpy(completo, nome); //Copies "Lambarildo"
	strcat(completo, " "); //Adds a gap
	strcat(completo, nome1); //Adds "Peixe"
	printf("Nome completo: %s", completo);
	
	return 0;
}

