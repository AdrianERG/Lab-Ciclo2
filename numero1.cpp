#include <iostream>
using namespace std;

    float promedio( float vector [] , int i, int n, float resultado) {
        if( i<n){

            resultado = resultado + vector [i];
                return promedio ( vector , i+1, n, resultado );
        }else{
            return resultado/n;
        }
    }

    int main (){

        int n;

            cout<< "De cuantos numeros quisiera sacar el promedio? : "; cin >> n;
            float * vector = new float [ n ];
                for ( int i = 0 ; i<n ; i++){
                    cout<< "Ingrese [ " << (i+1) << " ] :"; cin>> vector [i] ;
                }

                float resultado = promedio (vector, 0, n, 0);
                    cout<<"El promedio es: "<<resultado << endl;

     system("PAUSE");
     return 0;
    }