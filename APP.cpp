#include<iostream>
#include<string>
struct no {
	int info;
	no *link;
};

no *inicializaPilha(no *L) {
	return NULL;
}

void imprimePilha(no *L) {
	no *P;
	P = L;	
	
	printf("\n IMPRIME PILHA: \n");	
	while(P != NULL) {
		cout << P->info << " ";	
		P = P->link;
	}	
}

no *PUSH(no *L, int x) {
	no *N;

	N = new no;
	N->info = x;

    N->link = L;
	
	L = N;
	return (L);
}

no *POP(no *L, int *n) {
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

int main(){
	cout<<"\t\tOla, bem vindo ao simulador de Automato Pilha!!!\n"<<;
    cout<<"\t\tO alfabeto de entrada sera binario.\n"<<;
    cout<<"\t\tEntre o a cadeia dejada:\n"<<;
    cin<<""<<;
}