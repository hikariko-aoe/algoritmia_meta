#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "\n";
    int repeats = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    cout << "\n";
    
    for (int j = 0; j < n; j++){
        if(arr[j] == k){
            repeats = repeats + 1;
        }
    }
    
    cout << "\n" << repeats << endl;
    return 0;
}