#include<iostream>
#include<vector>

using namespace std;

int main() {

    //Cifra Final
    for(int k = 0; k <= 4; k++){
        //"2da y 3ra cifra"
        for(int i = 2, j = 0; i <= 8 && j <= 3; i=i+2, j++){
            //Impresion con "," y "()"
            cout<<"("<<k<<", "<<j<<", "<<i<<") ";
        }
        //Saltar linea despues de llegar al final de la 2da y 3ra cifra
        cout<<endl;
    }

}