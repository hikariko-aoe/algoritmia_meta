#include <iostream>
using namespace std;
int main(){
    int n, m, resultado;
    cin >> n >> m;
    cout << endl;
    int arr[n];

    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }
    cout << endl;
    for(int i : arr){
        int r = i + m ;
        cout << r << endl;
        resultado += r;
    }
    cout << resultado << endl;
    return 0;
}