#include <stdio.h>
#include <stdlib.h>
int main() {
	int opcao1, numero1, numero2;

	do {
	    printf("\nEscolha uma operacao:\n");
	    printf("1 - Soma\n");
	    printf("2 - Subtracao\n");
	    printf("3 - Multiplicacao\n");
	    printf("4 - Divisão\n");
	    printf("0 - Quer Sair?\n\n");

	    scanf("%d", &opcao1);

	    if (opcao1 > 0 && opcao1 < 5) {
		printf ("Digite dois Valores: ");
		scanf ("%d %d", &numero1, &numero2);
	    }

	    switch (opcao1) {
		    case 0:
			    printf("Encerrando... .\n");
			    break;
	            case 1:
			    printf("Resultado da soma: %d\n", numero1 + numero2);
			    break;
		    case 2:
			    printf("Resultado da subtracao: %d\n", numero1 - numero2);
			    break;
		    case 3:
			    printf("Resultado da multiplicacao: %d\n", numero1 * numero2);
			    break;
		    case 4:
			    while (numero2 == 0) {
				    printf("Nao e possivel dividir por zero, Digite outro valor:");

				    scanf("%d", &numero2);
		            }
			    printf("Resultado da divisao: %.2f\n", (float) numero1 / numero2);
			    break;
			default:
			    printf("Opcao invalida. Digite outro valor.\n");
		}
	} while (opcao1 != 0);

	return 0;
}


