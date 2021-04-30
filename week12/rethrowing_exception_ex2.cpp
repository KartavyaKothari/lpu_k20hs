#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        throw 21;
    }catch(int f){
        cout<<"ERR1"<<endl;
        throw;
    }catch(int e){
        cout<<"ERR"<<endl;
    }

    cout<<"@"<<endl;

    return 0;
}