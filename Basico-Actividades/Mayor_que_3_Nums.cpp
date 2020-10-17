#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
    //Variables (?)
    int a, b, c;
    //Pide al usuario ingresar 3 numeros
    cout<<"Ingresa el 1er numero: ";
    cin>>a;
    cout<<"Ingresa el 2do numero: ";
    cin>>b;
    cout<<"Ingresa el 3er numero: ";
    cin>>c;

    //Se ejecutan las comparaciones correspondientes


    if(a==b==c){    //Si los 3 son iguales
        cout<<"\nLos 3 numeros son iguales owo";
    }
    else if (b<a && c<a){    //Si el 1er numero es mayor que todos
        cout<<"\nEl 1er numero ("<<a<<") es mayor que los demas";
    }
    else if (a<b && c<b){    //Si el 2do numero es mayor que todos
        cout<<"\nEl 2do numero ("<<b<<") es mayor que los demas";
    }
    else if (a<c && b<c){    //Si el 3er numero es mayor que todos
        cout<<"\nEl 3er numero ("<<c<<") es mayor que los demas";
    }

    getch();
    return 0;
}