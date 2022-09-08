#include <iostream>
using namespace std;
long double factorial (int);
int main(){
    int n;

        cout<<"Introduzca numero: "; cin>>n;
            cout<<"Los numeros multiplicados del 1 hacia: "<<n<<endl;
                cout<<"es: "<<factorial(n)<<endl;
                    system("pause");
}

long double factorial (int n){
    long double fact;
    if (n==0)
        return 1;
        else
            return n*factorial(n-1);
}