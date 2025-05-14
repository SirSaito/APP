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

#include<iostream> //Biblioteca iostream.
#include<string> //Biblioteca string.

struct no { //Struct no: Função.
	int info;
	no *link;
};

no *inicializaPilha(no *L) { //função de incializar a pilha.
	return NULL;
}

void imprimePilha(no *L) {//função de imprimir os elementos da pilha.
	no *P;
	P = L;	
	
	printf("\n IMPRIME PILHA: \n");	
	while(P != NULL) {
		cout << P->info << " ";	
		P = P->link;
	}	
}

no *PUSH(no *L, int x) {//função de colocar um elemento a pilha.
	no *N;

	N = new no;
	N->info = x;

    N->link = L;
	
	L = N;
	return (L);
}

no *POP(no *L, int *n) {//função de retirar um elemento da pilha.
	no *AUX;

	if (L != NULL) {
		*n = L->info;
		AUX = L;
		L = L->link;
		delete AUX;
	}
	else{
		*n = 0;
	}
	return (L);
}

int main(){ //Main();
    struct info *link;//variaveis da struct.
	cout<<"\t\tOla, bem vindo ao simulador de Automato Pilha!!!\n"<<; //Mensagem de apresentação.
    cout<<"\t\tO alfabeto de entrada sera binario (0/1).\n"<<; //Declaração do alfabeto.
    cout<<"\t\tEntre o a cadeia dejada:\n"<<; //Mensagem de pedido de entrada de variavel.
    cin<<""<<; //Leitura de variavel.
}
