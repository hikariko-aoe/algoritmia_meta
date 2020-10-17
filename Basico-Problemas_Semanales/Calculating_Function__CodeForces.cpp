#include <iostream>                                     //https://www.youtube.com/watch?v=-jVeolw2258 uwu/*
#include <conio.h>

using namespace std;

int main (){
    //f(n) = -1+2-3+...+(-1)^n n
    //Variables
    int i=0;    //Referencia "Desde 0 hasta n hacer un loop" ( n=5, i=1,2,3,4,5 )
    int n=0;    //n
    int r1=0;   //Resultado

    //Peticion del Valor n
    cout<<"Ingrese el valor de n: ";
    cin>>n;

    //Se ejecuta un loop cuando i es igual a 0 y/o menor que n
    //Cuando i = n, se completa la serie !
    for (i = 0; i < n;)
    {
        if(r1<0){    //Si el resultado en una parte de la serie es negativo o igual a 0
            i++;        //Se suma 1 a i
            r1=r1+i;    //Al resultado se le suma i
        }
        else{        //Si el resultado en una parte de la serie es positivo
            i++;        //Se suma 1 a i
            r1=r1-i;    //Al resultado se le resta i
        }
        
    }

    //Se imprime el resultado
    cout<<"f(n)= "<<r1;
    
    getch();
    return 0;    
}