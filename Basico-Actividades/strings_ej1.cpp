#include <iostream>
using namespace std;

int main(){

    int n;
    string str;
    getline(cin, str);

    n = str.length();

    for(int i = n - 1; i >= 0; i--){
        cout << str[i];
    }
}