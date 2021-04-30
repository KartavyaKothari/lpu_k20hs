#include<bits/stdc++.h>
using namespace std;

class Ball{};

int main(){
    try{
        try{
            throw Ball();
        }catch(Ball b){
            cout<<"Catching ball inside boundary"<<endl;
            throw;
        }
    }catch(Ball b){
        cout<<"Catching ball outside boundary"<<endl;
    }

    cout<<"@"<<endl;

    return 0;
}