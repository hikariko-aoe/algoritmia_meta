#include <iostream>

using namespace std;

int main(){
    int n;
    string str;
    string rev;

    cin >> str;

    n = str.length();

    for(int i = n - 1; i >= 0; i--){
        rev = rev + str[i];
    }
    if(rev == str){
        cout << "Si";
    }
    else{
        cout << "No";
    }
    return 0;
}