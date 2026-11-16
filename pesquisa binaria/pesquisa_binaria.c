#include <stdio.h>//biblioteca padrao da linguagem c, responsavel por mostrar a mensagem no final do codigo

 int buscabinaria(int vetor[], int n, int busca, int inicio, int fim) { //essa funcao realiza a busca comparando o valor com vetor do meio
    int meio;//guarda a posicao do meio do vetor
    while (inicio <= fim) { //se o inicio for menor ou igual ao fim
        meio = (inicio + fim) / 2; // soma a posição inicial com a final e divide o resultado poe 2

        if (busca == vetor[meio]) { //verifica se a busca é igual ao vetor do meio, se for vai retornar o meio
            return meio;
        }
        else if (busca > vetor[meio]) {
            inicio = meio + 1;// se o numero procurado for maior que o vetor do meio, o inicio sera atualizado para a metade direita do meio
        }
        else {
            fim = meio - 1;// caso contrario, se for menor, sera encontrado na metade esquerda do meio, caso contrario retorna -1, indicando que não foi encontrado
        }
    }

    return -1;
}
    
    int main() { //função principal do programa
    int vetor[7] = {2, 4, 6, 8, 10, 12, 14};//declara um vetor de 7 posicoes
    int busca = 2; // declara a variavel atribuindo a ela o valor 12
    int inicio = 0; // variavel de inicio comecando na posicao 0
    int fim = 6; // variavel do fim terminando no valor 6
    int resultado; // retorna o retorno da funcao buscabinaria
       resultado = buscabinaria(vetor, 7, busca, inicio, fim);
        if (resultado != -1) { // verifica se o resultado e´diferente de -1
        printf("Numero encontrado na posicao %d", resultado); // exibe a mensagem mostrando a posicao que o vetor foi encontrado
}
        else
         printf("Numero nao encontrado");// se a condicao nao for verdadeira, sera mostrado que nenhum numero foi encontrado
         return 0; // fim do programa
}
        
 


    
   

   
    