#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x=0;
    int y=0;
    int div=0;
    int res=0;

    cout<<"No. de Muffins que tienes para compartir:"<<endl;
    cin>>x;
    cout<<"No. de compas que van a comer:"<<endl;
    cin>>y;
    div=x/y;
    res=x%y;
    cout<<"Tu y tus compas se van a comer ["<<div<<"] muffins"<<endl;
    cout<<"Entonces tu compa Gil se va a comer ["<<div+res<<"] muffins"<<endl;

    getch();
    return 0;

}