#include <iostream>         //uwu♪♪♪ https://youtu.be/KQetemT1sWc

using namespace std;

int main(){
    int k; //Costo de la 1ra banana
    int n; //Dinero que tengo
    int w; //Bananas que quiero
    int x; //Dinero Prestado
    int y; //Costo total
    int z; //Acumulador

    cin >>k;
    cin >>n;
    cin >>w;

    for(int i = 1; i <= w; i++){
        y = i * k;
        z = z + y;
    }

    if(n >= z){
        cout << 0;
    }

    else{
        x = z - n;
        cout << x;
    }
}