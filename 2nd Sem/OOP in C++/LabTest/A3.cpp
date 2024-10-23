#include <iostream>
using namespace std;

class Matrix{
    int mat[3][3];
    public:
        Matrix(){}
        void setMat(){
            cout<<"Enter Matrix: ";
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cin>>mat[i][j];
                }
            }
        }
        Matrix operator *(int a){
            Matrix res;
            for (int i = 0; i < 3; i++){
                for(int j=0; j<3; j++){
                    res.mat[i][j]= mat[i][j]*a;
                }
            }
            return res;
        }
        void display(){
            for (int i = 0; i < 3; i++){
                for(int j=0; j<3; j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Matrix m1, m3;
    m1.setMat();
    m3 = m1*9;
    m3.display();
    return 0;
}