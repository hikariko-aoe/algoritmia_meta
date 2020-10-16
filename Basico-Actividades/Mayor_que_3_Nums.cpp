#include <iostream>

using namespace std;

int main ()

{
    int a, b, c;
    cout<<"Ingresa el 1er numero: ";
    cin>>a;
    cout<<"Ingresa el 2do numero: ";
    cin>>b;
    cout<<"Ingresa el 3er numero: ";
    cin>>c;

    if(a==b==c){
        cout<<"\nLos 3 numeros son iguales owo";
    }
    else if (b<a && c<a){
        cout<<"\nEl 1er numero ("<<a<<") es mayor que los demas";
    }
    else if (a<b && c<b){
        cout<<"\nEl 2do numero ("<<b<<") es mayor que los demas";
    }
    else if (a<c && b<c){
        cout<<"\nEl 3er numero ("<<c<<") es mayor que los demas";
    }

    return 0;
}