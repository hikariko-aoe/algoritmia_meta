#include <iostream>

using namespace std;

int main(){

    int n;
    int barbulla;
    int acomulador;

    cin >> n;
    for(int i = 1; i <=n; i++){
        barbulla = (i*(i+1))/2;
        acomulador = acomulador + barbulla;
    }

    cout << acomulador;
    return 0;
}