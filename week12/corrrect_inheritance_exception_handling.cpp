#include<bits/stdc++.h>
using namespace std;

class Base{};
class Derived: public Base{};

int main(){
    try{
        Derived d;
        throw d;
    }catch(Derived d){
        cout<<"Derived caught"<<endl;
    }catch(Base b){
        cout<<"Base caught"<<endl;
    }

    cout<<"@"<<endl;

    return 0;
}