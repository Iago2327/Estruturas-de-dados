#include <iostream>

using namespace std;

struct pilha{
    int v[10];
    int topo;
};
void push (pilha &p, int novoElemento){
    p.topo++;
    p.v[p.topo]=novoElemento;
};
int top (pilha p){
    return p.v[p.topo];
};
void pop(pilha &p){
    p.topo--;
};
struct fila
{
    int v[10];
    int inicio;
    int fim;
};
void enquewe(fila &f, int novoElemento){
    f.v[f.fim]= novoElemento;
    f.fim++;
};
int first(fila f){
    return f.v[f.inicio];
}
void dequewe(fila &f){
    f.inicio++;
};

int main()
{
    
    
    
    
    
    return 0;
}
