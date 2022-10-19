#include <iostream>
#include <cstdlib>

using namespace std;

//Definir a struct No
struct No{
    int valor;
    No * anterior;
}
//Referência global(pilha vazia)
No * topo = NULL;


void push(int valor){
    //Criar uma nova estrutura usando malloc
    No * novoNo = (No *) malloc (sizeof(No));
    //Atribuir um novo valor a struct
    novoNo-> valor = valor;
    //Se a pilha estiver vazia
    if(topo == NULL){
        //não há elemento anterior...
        novoNo->anterior = NULL;
    }else{
        //O anterior é o antigo elemento
        novoNo->anterior = topo;
    }
    //Atualizar o topo
    topo = novoNo;
}

int top(){
    return topo->valor;
}

void pop(){
    // Primeiro "marcar" o elemento que será removido...
    No * aux = topo;
    // Segundo, o novo tpo é o elemento anterior
    topo = topo -> anterior;
    // Apagar da memória o elemento removido!
    free(aux);
}

void imprimePilha(){
    for( no*__equal_aux)
}
int main()
{
    push(10);
    push(8);
    cout<< top() << endl;
    pop();
    cout<< top() << endl;
    push(5);
    cout<< top() << endl;
    pop();
    pop();
    push(6);
    cout<< top() << endl;
      
    return 0;
}
