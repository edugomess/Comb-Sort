#include <stdio.h>
#include <stdlib.h>

int main(){
    int Auxiliar, TamanhoVetor;

    //escolha o tamanho do vetor
    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &TamanhoVetor);
    printf("\n");
    int Vetor[TamanhoVetor];

    //Le o valor de cada posicao do Vetor
    for(Auxiliar = 0; Auxiliar < TamanhoVetor; Auxiliar++){
        printf("Vetor[%d]: ", Auxiliar);
        scanf("%d", &Vetor[Auxiliar]);
    }

    printf("\n");
    CombSort(Vetor, TamanhoVetor);
    system("pause");
}

int CombSort(int Vetor[], int TamanhoVetor){
    int n, Auxiliar, Posicao, Trocas = 0, Verificacoes = 0, Gap;

    //mostra o vetor a ser ordenado
    for(Posicao = 0; Posicao < TamanhoVetor; Posicao++){
        printf("%3d", Vetor[Posicao]);
        printf("\n\n");
    }

    //compara elmentos de posicao N com elementos da Posicao n+Gap
    //O valor de Gap diminui a cada itera��o
    for(Gap = TamanhoVetor/1.3; Gap != 0; Gap/=1.3)
        for(n = 0; n < TamanhoVetor-Gap; n++){

        //caso n > n+Gap, os valores sao trocados:
        if(Vetor[n] > Vetor[n+Gap]){
            Auxiliar = Vetor[n+Gap];
            Vetor[n+Gap] = Vetor[n];
            Vetor[n] = Auxiliar;
            Trocas++;
        }
        Verificacoes++;

        //Mostra os numeros sendo comparados na iteracao atual
        for(Posicao = 0; Posicao < TamanhoVetor; Posicao++){
            if(Posicao == n || Posicao == n+Gap)
                printf("<%d>", Vetor[Posicao]);
            else printf("%3d", Vetor[Posicao]);

        }

        printf("\n\n");
    }
    printf("\n\n Verificacoes: %d", Verificacoes);
    printf("\n Trocas Totais: %d\n\n", Trocas);
}
