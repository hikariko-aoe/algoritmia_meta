#include<iostream>

using namespace std;

int main(){
    
    int year;
    cin>>year;

    if (year % 4 == 0){
        if(year % 400 == 0){
            cout<<"BISIESTO"<<endl;
        }
        else if(year % 100 == 0){
            cout<<"NO BISIESTO"<<endl;
        }
        else{
            cout<<"BISIESTO"<<endl;
        }
        
    }
    else{
        cout<<"NO BISIESTO"<<endl;
    }
    
}