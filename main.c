#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// cria um ponteiro para o bloco de memoria alocado
	char *memoria_alocada;
    // aloca a quantidade de memoria solicitada (20 x char)
    // e inicializa o ponteiro com a posicao da memoria
    memoria_alocada = malloc (50 * sizeof (char));
    // se o ponteiro foi inicializado com o valor nulo
    if (memoria_alocada == NULL)
    {
    	// exibe a mensagem de erro
    	printf ("Nao foi possivel alocar a memoria desejada!\n");
    }
    // se o ponteiro nao for nulo
    else
    {
    	// transfere a mensagem para a memoria alocada
    	strcpy (memoria_alocada, "Esta e a melhor aula do mundo!\n");
    }
    // exibe o conteudo da memoria alocada
    printf ("O conteudo da memoria alocada e: %s\n", memoria_alocada);
    
    // OBS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// exibe a quantidade de memoria alocada
	//printf ("Quantidade de memoria alocada: %i\n", strlen (memoria_alocada));
    
    // altera a quantidade de memoria alocada para (100 x char)
    memoria_alocada = realloc (memoria_alocada, 100 * sizeof (char));
    // se o ponteiro foi inicializado com o valor nulo
    if (memoria_alocada == NULL)
    {
    	// exibe a mensagem de erro
    	printf ("Nao foi possivel alocar a memoria desejada!\n");
    }
    // se o ponteiro nao for nulo
    else
    {
    	// transfere a mensagem para a memoria alocada
    	strcpy (memoria_alocada, "Quantidade de memoria alocada alterada!\n");
    }
    // exibe o conteudo da memoria alocada
    printf ("O conteudo da memoria alocada e: %s\n", memoria_alocada);
    
    // OBS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // exibe a quantidade de memoria alocada
    //printf ("Quantidade de memoria alocada: %i\n", strlen (memoria_alocada));
    
    // libera a memoria alocada
    free (memoria_alocada);
    // retorna 0
	return 0;
}
