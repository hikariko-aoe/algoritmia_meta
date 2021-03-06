#include <iostream>

using namespace std;

int main(){
    //Variables float para admitir decimales
    double sal;
    double imp;
    double exceso;
    //Introducir tu salario
    cin>>sal;
    
    //Si el salario es menor a 969.5, sacarle el 1.92% de impuestos.
    if (sal>=0.01 && sal<=969.5){
        imp=sal*1.92/100;
        cout<<imp;
    }
    //Si el el salario es mayor a 969 y menor a 1703, agregar el impuesto fijo, calcular el dinero sobresaliente y el porcentaje adicional
    else if (sal>=969.51 && sal<=1703.80){
        exceso=sal-969.51;
        imp=56.91+(exceso*10.88/100);
        cout<<imp;
    }
    //igual que el else if anterior
    else if (sal>=1703.81 && sal<=4782.61){
        exceso=sal-1703.81;
        imp=136.85+(exceso*16/100);
        cout<<imp;
    }
    else if (sal>=4782.62 && sal<=14391.44){
        exceso=sal-4782.62;
        imp=766.15+(exceso*23.52/100);
        cout<<imp;
    }
    else if (sal>=14391.45 && sal<=19188.61){
        exceso=sal-14391.45;
        imp=3470.25+(exceso*32/100);
        cout<<imp;
    }
    else if (sal>=19188.62 && sal<=57565.76){
        exceso=sal-19188.62;
        imp=5005.35+(exceso*34/100);
        cout<<imp;
    }
    else if (sal>=57565.77){
        exceso=sal-57565.77;
        imp=18053.63+(exceso*35/100);
        cout<<imp;
    }

    return 0;
}