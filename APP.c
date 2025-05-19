/*
Descrição do Trabalho de Automato e Pilha:

"Desenvolver um AAP (Autômato a Pilha), ele deve simular o funcionamento teórico de um autômato.

Requisitos mínimos: 

Uma cadeia de entrada (definida pelo alfabeto desejado) e dizer se reconhece ou não
Definir em código toda a sêxtupla (mesmo que não utilize todas as variáveis)
Ideias de extras: 

Fazer a definição dos estados dinâmicos
Definir a linguagem
Definir alfabeto, dentre outros elementos da sêxtupla como entrada.
BONUS: Fazer representação gráfica"
*/

/*
git add arquivo
git commit -m "Mensagem"
git push
*/

#include<stdio.h>   // biblioteca stdio.
#include<stdlib.h>  // biblioteca stdlib.
#include<locale.h>  // biblioteca locale.

typedef struct NO{  // Estrutura do interior da Pilha.
    int dado;   //
    struct NO *prox;    //
} NO;

typedef struct PILHA{ //Topo da Pilha.
    NO *topo;   // Tamanho da pilha.
} PILHA;

void inicializaPilha(PILHA *p){ //Topo aponta para o primeira referencia da Pilha.
    p -> topo = NULL;
}

void empilha(int dado, PILHA *p){ //cria espaco na Pilha e coloca o primeiro elemento.
    NO *ptr = (NO*) malloc(sizeof(NO));

    if(ptr == NULL){
        printf("/t/tErro de alocacao de novo no./n");
        return;
    }

    else{
            ptr -> dado = dado;     //ptr o espaco da pilha aponta para dado.
            ptr -> prox = p -> topo;    //prox do elemnto aponta pata o topo.
            p -> topo = ptr;    //elemento enserido no topo.
        }
}

int desempilha(PILHA *p){ //Aponta para dado para remover elemento.
    NO* ptr = p -> topo; //ptr apontando para o elemento no topo da Pilha.
    int dado;

    if(ptr == NULL){ //Checagem se a Pilha esta vazia.
        printf("\t\tPilha vazia.\n");
        return 0;
    }

    else{ //Desempilha Elemento.
        p -> topo = ptr -> prox;
        ptr -> prox = NULL;
        dado = ptr -> dado;
        free (ptr);
        return dado;
    }
}

void imprimePilha(PILHA *p){ //Imprime a Pilha.
    NO *ptr = p -> topo;
    
    if(ptr == NULL){ //Checagem se a Pilha esta vazia.
        printf("\t\tPilha vazia.\n");
        return;
    }

    else{
        while (ptr != NULL){
            printf("\t\t%d\n", ptr -> dado);
            ptr = ptr -> prox;
        }
    }
}

int main(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA)); //Chama Pilha no Main().

    printf("\t\tBem vindo ao simulador de Automato a Pilha.\n");    //Mensagem de Bem vindo.
    printf("/t/t/n");   //

    if (p1 == NULL){
        printf("/t/tErro de alocacao da Pilha./n");
        exit(0);
    }

    else{
        inicializaPilha(p1);

        empilha (10, p1);
        empilha (20, p1);
        empilha (30, p1);

        imprimePilha(p1);

        printf("\t\tTentando desempilhar - resultado: %d\n", desempilha(p1));
        imprimePilha(p1);
        printf("\t\tTentando desempilhar - resultado: %d\n", desempilha(p1));
        imprimePilha(p1);
        printf("\t\tTentando desempilhar - resultado: %d\n", desempilha(p1));
        imprimePilha(p1);

    }

    return 0;

}