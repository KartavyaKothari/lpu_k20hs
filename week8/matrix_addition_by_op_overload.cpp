#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int arr[5][5];
    
    Matrix(){
        for(int i = 0 ; i < 5 ; i++)
            for(int j = 0 ; j < 5 ; j++)
                arr[i][j] = (i+1)*(j+1);
    }

    void display(){
        for(int i = 0 ; i < 5 ; i++){
            for(int j = 0 ; j < 5 ; j++){
                cout<<setw(2)<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator +(Matrix m){
        Matrix res;
        for(int i = 0 ; i < 5 ; i++){
            for(int j = 0 ; j < 5 ; j++){
                res.arr[i][j] = arr[i][j]+m.arr[i][j];
            }
        }

        return res;
    }
};

int main(){
    Matrix a;
    Matrix b;

    Matrix c = a+b;

    c.display();
}