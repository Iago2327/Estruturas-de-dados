#include <iostream>

using namespace std;

struct produto
{
    int codigo;
    char nome[50];
    float valor;
};
 
int main()
{
    produto estoque[5];
    //Leitura do vetoe de struct
    for(int i=0;i<5;i++){
        cout<<endl<<"Codigo: ";
        cin>>estoque[i].codigo;
        cout<<"Nome: ";
        cin>>estoque[i].nome;
        cout<<"Valor: ";
        cin>>estoque[i].valor;
    }
    //Impressão de todos os produtos
    for(int i=0;i<5;i++){
        //Como imprimir somente os produtos que tem valor superior a 2000
        if(estoque[i].valor > 2000){
        cout<<endl<<"Codigo: "<<estoque[i].codigo;
        //Dar um desconto de 10% aos produtos que tem valor abaixo de 1000
        }else if(estoque[i].valor < 1000){
            cout<<endl<<"Codigo: "<<estoque[i].codigo<<endl;
            cout<<"Nome: "<<estoque[i].nome<<endl;
            cout<<"Valor: "<<(estoque[i].valor - (estoque[i].valor*0.1))<<endl;
        }

    }    

    return 0;
}
