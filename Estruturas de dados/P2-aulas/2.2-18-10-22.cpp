#include <iostream>
#include <cstdlib>

using namespace std;

//Definir a struct No
struct No{
    int valor;
    No * anterior;
};
//Referência global(pilha vazia)
No*topo = NULL;


/**JEITO BURRO
 * void push(int valor){
    //Criar uma nova estrutura usando malloc
    No * p = (No *) malloc (sizeof(No));
    //Atribuir um novo valor a struct
    p-> valor = valor;
    //Se a pilha estiver vazia
    if(topo == NULL){
        //não há elemento anterior...
        p->anterior = NULL;
    }else if(p->valor < topo->valor){
        //O anterior é o antigo elemento
        p->anterior = topo;
    }else{
        free(p)
        return;
    }
    //Atualizar o topo
    topo = p;
};**/
void push(int valor){
    if(topo == NULL || topo->valor > valor){
    
    //Criar uma nova estrutura usando malloc
    No * p = (No *) malloc (sizeof(No));
    //Atribuir um novo valor a struct
    p-> valor = valor;
    //Se a pilha estiver vazia
    if(topo == NULL){
        //não há elemento anterior...
        p->anterior = NULL;
    }else if(p->valor < topo->valor){
        //O anterior é o antigo elemento
        p->anterior = topo;
    
    }
    //Atualizar o topo
    topo = p;
    }
};

int top(){
    //falta verificar UNDERFLOW!
    return topo->valor;
};

void pop(){
    //falta verificar UNDERFLOW!
    // Primeiro "marcar" o elemento que será removido...
    No * aux = topo;
    // Segundo, o novo tpo é o elemento anterior
    topo = topo -> anterior;
    // Apagar da memória o elemento removido!
    free(aux);
};


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
