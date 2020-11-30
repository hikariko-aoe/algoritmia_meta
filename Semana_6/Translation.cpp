#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    string t;
    string rev;

    cin >> s;
    cin >> t;

    n = s.length();

    for(int i = n - 1; i >= 0; i--){
        rev = rev + s[i];
    }
    if(rev == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}