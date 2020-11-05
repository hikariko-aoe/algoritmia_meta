#include<iostream>

using namespace std;

int main(){
    //Variables
    int mins;
    int key;
    float costo;
    //Entradas Clave/Minutos
    cin>>key;
    cin>>mins;
    //switch
    switch (key){
    //Desarrollo de los casos (claves)
    case 12:
        costo=mins*2;
        break;
    case 15:
        costo=mins*2.2;
        break;
    case 18:
        costo=mins*4.5;
        break;
    case 19:
        costo=mins*3.5;
        break;
    case 23:
        costo=mins*6;
        break;
    case 25:
        costo=mins*6;
        break;
    case 29:
        costo=mins*5;
        break;
    }
    //Impresion del precio
    cout<<costo<<endl;
}
