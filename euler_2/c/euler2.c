#include <stdio.h>


int main (){

	int num1 = 0;
	int num2 = 1;
	int sum = 0;
	int i = 0;
	long sumapares = 0;
	int seguir = 1;

	do{
		sum = num1 + num2;
		if (sum < 4000000){
			if (sum % 2 == 0){
				sumapares += sum;
			}
			num1 = num2;
			num2 = sum;

			printf ("%d\n", num2);
		}
		else{
			seguir = 0;
		}

	}while (seguir);

	printf ("la suma de los numeros pares de la secuencia de fibonacci entre 0 y 10 es: %d\n", sumapares);


	return 0;
}
