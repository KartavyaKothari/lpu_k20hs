#include<bits/stdc++.h>
using namespace std;

void print_stats(string name){
    cout<<"++++++++++++++"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Length: "<<name.length()<<endl;
    cout<<"Capacity: "<<name.capacity()<<endl;
    cout<<"++++++++++++++"<<endl;
}

int main(){
    // string name = "karxavya";
    // cout<<"Original string is: "<<name<<endl;

    // name[3] = 't';
    // name[0] = name[0]-32;

    // string name;
    // getline(cin,name);

    // print_stats(name);
    // name.push_back('X');
    // print_stats(name);
    // name.pop_back();
    // name.pop_back();
    // print_stats(name);

    // string str;
    // int temp;
    // for(;;){
    //     str.push_back('a');
    //     str.shrink_to_fit();
    //     cout<<str.length()<<" "<<str.capacity()<<endl;
    //     getchar();
    // }

    string name = "Kartavya";
    // name.resize(100);
    // cout<<name<<"**";

    string str2 = name;
    // cout<<str2;

    string str3 = "Deep";

    swap(str2,str3);

    cout<<str2;

    // cout<<"Final string is: "<<name<<endl;
}