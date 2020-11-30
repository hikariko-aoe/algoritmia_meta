#include <iostream>
using namespace std;

int main(){

    int n; //Cant. de palabras
    string str; //Palabra
    int k; //Longitud de la palabra
    int acum; //Letras entre la 1ra letra y la ultima
    char li; //1ra letra
    char lf; //Ultima letra

    int j;

    cin >> n;

    for(j = 0; j < n; j++){
        cin >> str;
        cout << str;
    }

    /*k = str.length();
    if(k >= 10){ // Si la palabra tiene 10 o mas letras, abreviar...
        for(int i = 0; i < k; i++){
            if(i == 0){ //Si i = 0, asignar a li la primera letra
                li = str[i];
            }
            else if(i != 0 && i < k - 1){ //Si i !=0 y 1 < k-1, contabilizar el no. de letras omitidas
                acum ++;
            }
            else if(i == k - 1){ //Si i = k-1, asignar a lf la ultima letar
                lf = str[i];
            }
        }
        cout << li << acum << lf; //Impresion de la palabra abreviada
    }
    else{
        cout << str;
    }*/
    return 0;
}