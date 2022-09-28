#include <iostream>

using namespace std;
    
struct pilha{
    int v[10];
    int topo;
};

void push(pilha &p, int novoElemento){
    p.topo ++;
    p.v[p.topo]= novoElemento;
}

int top(pilha p){
    return p.v[p.topo];
}

void pop(pilha &p){
    p.topo--;
}

struct fila{
    int v[10];
    int inicio;
    int fim;
};

void enqueue(fila & f, int novoElemento){
    f.v[f.fim]= novoElemento;
    if(f.fim+1== 10){
    f.fim=0;
    }else{
        f.fim++;
    }
};

int first(fila f){
    return f.v[f.inicio];
}

void dequeue(fila & f){
    if(f.inicio+1==10){
        f.inicio=0;
    }else{
        f.inicio++;
    }
}

int main()
{
    
    
    return 0;
}
