#include<stdio.h>

int main () {
float val, soma;
int contagem;

soma = 0;

contagem = 1;
	while(contagem <= 5) {
	printf("\nDigite o %do. numero: " , contagem);
	scanf("%f", &val);
	soma = soma + val;
	contagem = contagem + 1;
}
printf("\n0 resultado da soma eh: %.2f", soma);
return 0;

}
