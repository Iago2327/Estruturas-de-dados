#include <iostream>

using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int media(int v[],int tamanho){
    int soma =0
    for(int i=0;i<tamanho;i++){
        soma +=v[i];
    }
    return soma/tamanho;
}
int main()
{
   
    
    int a[]= {1,2,3};
    int b[]= {2,3,4,6,8,0};
    cout<<"Madia de a= "<<media(a,3)<<endl;
    cout<<"Madia de b= "<<media(a,6)<<endl;
    return 0
    
    return 0;
}


