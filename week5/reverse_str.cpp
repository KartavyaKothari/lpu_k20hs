#include<bits/stdc++.h>
using namespace std;

int main (){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    
    // int j = str.size();

    for (int i = 0; i < str.size()/2; i++){
        swap(str[i],str[str.size()-1-i]);
    }

    // reverse(str.begin(),str.end());

    cout << "\nReverse string : " << str;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string name = "Kartavya";
//     string rev_str = "";

//     // cout<<(name + " " + rev_str)<<endl;

//     for(int i = 0 ; i < name.size() ; i++){
//         rev_str += name[name.size()-i-1];
//     }

//     cout<<rev_str<<endl;

//     return 0;
// }