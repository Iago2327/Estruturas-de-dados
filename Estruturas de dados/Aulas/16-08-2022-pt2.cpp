#include <iostream>

using namespace std;

struct pilha
{
    int topo;
    int v[10];
};

void push(pilha p, int novoElemento)
{
    p.topo++;
    p.v[p.topo] = novoElemento;
}
int top(pilha p)
{
    return p.v[p.topo];
}
int pop(pilha p){
    p.topo--;
}

int main()
{
    pilha s;
    s.topo = -1;
    push(s, 2);
    top(s);
    push(s, 3);
    push(s, 4);
    top(s);
    pop(s);
    top(s);

    return 0;
}
