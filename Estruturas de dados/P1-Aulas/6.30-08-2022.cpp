#include <iostream>

using namespace std;

struct fila{
    int v[10];
    int inicio;
    int fim;
};
void enqueue(fila &f, int novoElemento){
    f.v[f.fim]= novoElemento;
    f.fim++;
};
int first(fila f){
    return f.v[f.inicio];
};
void dequeue(fila &f){
    f.inicio++;
};
bool estaCheia(fila f){
    return (f.inicio == 0 &&f.fim==9) || (f.fim+1==f.inicio);
}
bool estaVazia(fila f){
    return (f.inicio == f.fim);
}
int main()
{
    fila fn;
    fn.inicio = fn.fim = 0;
    enqueue(fn, 3);
    enqueue(fn, 5);
    enqueue(fn, 9);
    enqueue(fn, 2);

    cout<< first(fn)<<endl;

    dequeue(fn);
    cout<< first(fn)<<endl;
        
    
    return 0;
}
