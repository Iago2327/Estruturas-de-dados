#include <iostream>

using namespace std;

struct pilha{
    int v[10];
    int topo;
};
bool estaVazia(pilha p){
    return p.topo < 0;
}

bool estaCheia(pilha p){
    return p.topo == 9;
}

void push(pilha &p, int novoElemento){
    if(estaCheia(p)){
        cout<<"ERRO! A pilha esta cheia"<<endl;
        return;    
    }
    p.topo++;
    p.v[p.topo]=novoElemento;
};
int top(pilha &p){
    if(estaVazia(p)){
        cout<<"ERRO! Não hà topo em pilha vazia!"<<endl;
        return -999999;
    }
    return p.v[p.topo];
}

void pop(pilha &p){
    if(estaVazia(p)){
        cout<<"ERRO! A pilha esta vazia!";
    }else{
        p.topo--;
    }
    
}

int main()
{
    pilha minhaPilha;
    minhaPilha.topo= -1;

    if(estaVazia(minhaPilha)){
    cout<<"A Pilha esta vazia!"<<endl;
    }

    push(minhaPilha, 4);
    cout<<top(minhaPilha)<<endl;
    push(minhaPilha, 5);
    pop(minhaPilha);
    push(minhaPilha, 10);
    push(minhaPilha, 1);
    cout<<top(minhaPilha)<<endl;
    pop(minhaPilha);
    pop(minhaPilha);
    cout<<top(minhaPilha)<<endl;
    pop(minhaPilha);
    pop(minhaPilha);
    for(int i=20; i<35 ;i++){
        push(minhaPilha, i);
    }

    return 0;
}
