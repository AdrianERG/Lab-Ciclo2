#include <iostream>
using namespace std;
int main (){
    cout<<endl;

        int numeros[] = {4,2,3,1,5};
        int i, pos, aux;

        for(i=0; i<5; i++){
            pos = i;
            aux = numeros[i];

            while ((pos>0)&&(numeros[pos-1]>aux)){
                numeros[pos] = numeros[pos-1];
                pos--;
            }
            numeros[pos] = aux;
        }

        cout<<"\nOrden Descendente: ";
        for (i=4;i>=0;i--){
            cout<<numeros[i]<<" ";
        }
    
    return 0;
}