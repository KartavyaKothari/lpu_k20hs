#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Kartavya";

    // for(int i = 0 ; i < name.size() ; i++){
    //     cout<<name[i]<<endl;
    // }

    // cout<<endl;

    for(string::iterator i = name.begin() ; i != name.end() ; i++){
        cout<<*i<<endl;
    }

    for(string::reverse_iterator i = name.rbegin() ; i != name.rend() ; i++){
        cout<<*i;
    }

    return 0;
}