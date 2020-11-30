#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    cout << endl;

    for(int columnas = 0; columnas < n; columnas ++){
        for(int filas = 0; filas < m; filas++){
            cin >> arr[columnas][filas];
        }
    }

    cout << endl;
    for(int columnas = 0; columnas < n; columnas ++){
        for(int filas = 0; filas < m; filas++){
            cout << arr[columnas][filas];
        }
    }
    cout << endl;
    return 0;
}