#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    //Variables
    int c1, c2, c3;
    int prom;
    //Entradas de el usuario
    cin>>c1;
    cin>>c2;
    cin>>c3;
    //Promediacion
    prom=((c1+c2+c3)/3);
    //Condicionales >=6, else
    if (prom>=6){
        //Aprueba
        cout<<1;
    }
    else
    {
        //Reprueba
        cout<<0;
    }
    //Pausa (En VSCode la ventana se cierra despues del return)
    getch();
    //return
    return 0;
    
}