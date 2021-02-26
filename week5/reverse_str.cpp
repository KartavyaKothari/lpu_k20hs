#include<bits/stdc++.h>
using namespace std;

int main(){

    string name = "Kartavya";
    string rev_str = "";

    // cout<<(name + " " + rev_str)<<endl;

    for(int i = 0 ; i < name.size() ; i++){
        rev_str += name[name.size()-i-1];
    }

    cout<<rev_str<<endl;

    return 0;
}