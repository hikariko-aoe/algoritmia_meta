#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    //Variables
    int x=0;
    int y=0;
    int div=0;
    int res=0;
    //Pregunta No. De Muffins
    cout<<"No. de Muffins que tienes para compartir:"<<endl;
    cin>>x;
    cout<<"No. de compas que van a comer:"<<endl;
    cin>>y;
    //Operaciones correspondientes
    div=x/y;
    res=x%y;
    //impresion del resultado
    cout<<"Tu y tus compas se van a comer ["<<div<<"] muffins !"<<endl;
    cout<<"Entonces tu compa Gil se va a comer ["<<div+res<<"] muffins !"<<endl;

    getch();
    return 0;

}