#include <iostream>
using namespace std;

int sumaRecursiva(int n, int suma, int count){

    if(++count <= n)
        return sumaRecursiva (n, suma + count, count);
            else
                return suma;
}

int main(){
    int n;

    cout<< "Valor de n: "; cin >> n;

        cout<<"\nLa suma es: "<<sumaRecursiva (n, 0, 0)<<endl;

        return 0;
}
