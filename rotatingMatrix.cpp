#include<iostream>
using namespace std;
//Rotating matrix by 90 degree clockwise
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    cout<<"Original Matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Transpose the matrix
    for(int i=0; i<3; i++){    //complexity O(n^2)
        for(int j=i; j<3; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout<<"Transpose of matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Reverse each row
    for(int i=0; i<3; i++){         //complexity O(n^2)
        int start = 0;
        int end = 2;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout<<"Rotated Matrix by 90 degree clockwise: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}