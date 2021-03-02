// Lovedeeps attempt at second string problem

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    str[0]= toupper(str[0]);
    
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str[i+1] = toupper(str[i+1]);
        }
    }
    
    cout<<str;
    
    return 0;
}

