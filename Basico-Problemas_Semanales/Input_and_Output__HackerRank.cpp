#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    //Variables
    int a=0;
    int b=0;
    int c=0;
    int suma=0;
    //Se solicita ingresar las 3 variables
    cout<<" \t";
    cin>>a;
    cout<<"+\t";
    cin>>b;
    cout<<" \t";
    cin>>c;
    //Se suma
    suma=a+b+c;
    //Se imprime el resultado
    cout<<"___________________"<<endl;
    cout<<" \t"<<suma;

    getch();
    return 0;
}