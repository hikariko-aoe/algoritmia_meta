#include <iostream>

using namespace std;

int main(){

    int gatos;
    int cont;

    cin>>gatos;

    for(int i = 1; i <= gatos; i++){
        for(int k = i; k < gatos; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"#";
        }
        cout<<"\n";
    }
    
    return 0;
}