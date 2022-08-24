#include <iostream>
using namespace std;
int main (){

    int numeros [] = {4,1,2,3,5,7,8,9,6,10};
    int i,j,aux;

        for (i = 0; i<10; i++){
            for(j=0; j<10; j++){
                if (numeros[j]> numeros[j+1]){
                    aux = numeros [j];
                    numeros[j] = numeros [j+1];
                    numeros [j+1] = aux;
                }
            }
        } 

        cout<<"\nOrden Descendente: ";
            for(i=9; i>=0; i--){
                cout<<numeros[i]<<" ";
            }

 
    
    return 0;
}