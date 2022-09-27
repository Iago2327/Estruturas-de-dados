/**#include <iostream>
    
using namespace std;


int main()
{
    int x;
    int y;
    float z;
    char c[3];

    //ponteiros para tipos inteiros
    int * p;
    int * q = &y; // q armazerá o endereço de "y".

    p = &x; //p armazenará o endereço de "x".

    cout << &x << endl;
    cout << &y << endl;
    cout << &z << endl;
    cout << &c << endl;

    *p = 10; //atribuição indireta...
    
    cout << "Endereço armazenado em q: " << q << endl;
    cout << "Endereço armazenado em p: " << p << endl;
    cout << "Conteúdo de x: " << x << endl;

    p = &y; //p agora aponta "y".

    *p = 20; //atribuição indireta...

    return 0;
}**/

#include <iostream>
    
    using namespace std;

struct aluno{
    int ra;
    float nota;
};

int main()
{
    aluno a; //variável do tipo aluno.
    aluno * pa; //ponteiro para a struct.

    pa = &a; // ponteiro "pa" aponta a variável "a".


    pa->ra = 123; // o campo "ra" da struct apontada por "pa" será alterado.
    pa->nota = 9.3; // o campo "nota" da struct apontada por "pa" será alterado.    
    
    
    return 0;
}