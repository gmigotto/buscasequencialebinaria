#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Busca Binaria Iterativa
// Faz a busca do elemento no vetor de forma iterativa.

int binariaIterativa(int vetor[], int valor){

    int inicio = 0;
    int fim = TAM-1;

    while (inicio<=fim){ //condi��o inicial.

       int meio = (inicio+fim)/2; // calculo da posi��o correspondente ao meio do vetor

        if (valor == vetor [meio]){
            return meio;
    }
            else {
                if (valor > vetor[meio]){ //busca para a direita do vetor;

                    inicio = meio +1 ;
                }
                    else{
                        fim = meio -1; //busca para a esquerda do vetor;
                    }
                }
            }
            return -1; // elemento n�o encontrado
        }


//BUSCA BINARIA RECURSIVA
//busca o elemento no vetor de forma recursiva. A cada itera��o a fun��o reduz o espa�o de busca.
int binariaRecursiva(int vetor [], int inicio, int fim, int valor3){
    int meio;
    if (inicio <= fim){
         meio = (inicio+fim)/2; // calcula o meio do vetor.

        if (valor3 == vetor[meio]){
            return meio;
        }
            else {if (valor3 > vetor[meio]){ //a busca continuar� para a direita
                    return binariaRecursiva(vetor, meio+1, fim, valor3);}

                     else {return binariaRecursiva(vetor, inicio, meio-1, valor3);}}

                    }
                     return -1; //elemento n�o � encontrado.
}






int menu()
{

    int opcao;
    system("cls||clear");
    printf("\n========  Algoritmos de Busca Sequencial e Binaria  ========\n");
    printf("\n");
    printf("VETOR: {1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10}\n");
    printf("\n\n");
    printf("0 Sair\n");
    printf("1 Busca Sequencial\n");
    printf("2 Busca Binaria: Iterativa\n");
    printf("3 Busca Binaria: Recursiva\n");
    printf("OPCAO: ");
    scanf("%d", &opcao);
    printf("\n\n");
    return opcao;
}


int main(void)

{
    int n=TAM;
    int p=0;
    int resp[TAM];
    int valor, valor2, valor3, opcao, i;
    int inicio= 0, fim = TAM-1, meio;

    int vetor[TAM]= {1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

     do{
        opcao = menu();
        switch(opcao)
        {
            case 0:
                printf("Obrigado por utilizar o sistema! =D\n");

                break;

            case 1:

                    //BUSCA SEQUENCIAL
                    // busca sequencialmente o item dentro do vetor com base em compara��o.

                    printf ( " \n * BUSCA SEQUENCIAL * \n\n " );
                    printf ( " \n Digite o valor do vetor a ser procurado: " );
                    while( (getchar()) != '\n');
                    scanf  ("%d", &valor);
                    fflush(stdin);

                    for (i=0; i<=TAM-1;i++){
                    if(vetor [i] == valor) {
                    resp[p] = i;
                    p = p+1;   // CONTADOR DO �NDICE
                    }
                    }
                    if(p>0){
                        for (i=0; i<=p-1; i++)
                    {
                    system("cls||clear");
                    printf ("Valor %d esta na posicao %d\n", valor, resp[i]);   // Percorre as posi��es; // Percorre as posi��es
                                                                               // No m�dio caso: o elemento � encontrado ap�s (N+1)/2  compara��es;
                                                                              // No pior caso: o elemento � encontrado na ultima posi��o ap�s fazer compara��o com todos os itens do vetor.
                                                                             // No melhor caso: o elemento procurado � encontrado na primeira tentativa;

                    }
                        }
                    else {
                            printf("\n Numero nao encontrado"); // O elemento n�o � encontrado ap�s percorrer todo o vetor.
                        }
                        while( (getchar()) != '\n');
                        getchar();
                    system("cls||clear");

                    break;

            case 2:
                    printf ( " \n * BUSCA BINARIA ITERATIVA * \n\n " );
                    printf ( " \n Digite o valor do vetor a ser procurado: " );
                    scanf  ("%d", &valor);
                    fflush (stdin);
                    system("cls||clear");

                    if (vetor[TAM] < 0 || vetor[TAM] > 9){
                    //if (valor == vetor[TAM]){
                    printf ("Valor %d encontrado na posicao %d\n", valor, binariaIterativa (vetor, valor) );}
                    else {printf("\nValor %d nao encontrado!", valor);}



                while( (getchar()) != '\n');
                getchar();
                system("cls||clear");

                    break;

            case 3:
                    printf ( " \n * BUSCA BINARIA RECURSIVA * \n\n " );
                    printf ( " \n Digite o valor do vetor a ser procurado: " );
                    scanf  ("%d", &valor3);
                    fflush (stdin);
                    system("cls||clear");



                    if (vetor[TAM] < 0 || vetor[TAM] > 9){

                        printf ("\nValor %d nao encontrado", valor3);
                    } else {
                      printf ("Valor %d encontrado na posicao %d\n", valor3, binariaRecursiva (vetor, 0, 9, valor3) );}


                while( (getchar()) != '\n');
                getchar();

                system("cls||clear");

                break;

                default: printf("\nErro: Opcao Invalida");
                }
                 }while(opcao != 0);

                 return 0;
}
