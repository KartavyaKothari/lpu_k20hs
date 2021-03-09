#include<bits/stdc++.h>
using namespace std;

int main(){
    string names[] = {"Rishi","Amit","Dhiraj","Tarun","Kartavya"};
    int ages[] = {34,12,55,11,24};

    fstream new_file;
    // ofstream new_file;
    new_file.open("outfile.kartavya",ios::app);

    if(!new_file){
        cout<<"Some error occured"<<endl;
    }else{
        cout<<"File opened successfully"<<endl;
        
        for(int i = 0 ; i < 5 ; i++){
            new_file<<names[i]<<" "<<ages[i]<<endl;
        }
        
        new_file.close();
    }

    return 0;
}