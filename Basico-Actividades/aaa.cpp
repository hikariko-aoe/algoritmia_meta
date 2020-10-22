#include <stdlib.h>
#include <iostream>

using namespace std;
int main (){
    int edad = 15;

    if(edad>=10){
        
        if(edad<20){
            //Se vacuna
            cout<<"Pase a aplicarse su vacuna";
        }
        else{
            cout<<"Muy grande para la vacuna";
        }
    }
    else{
        cout<<"No apto para la vacuna";
    }
}