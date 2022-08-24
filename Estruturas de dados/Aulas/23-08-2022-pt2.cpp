#include <iostream>

using namespace std;

struct fila{
    int v[10];
    int fim;
    int inicio;
};


void equeu(fila & f, int novoElemento){
    f.v[f.fim]=novoElemento;
    f.fim++;
}

void dequeu(fila & f){
    f.inicio++;
}
int first(fila f){
    return f.v[f.inicio];
}
int main()
{

    
    
    
    return 0;
}
