#include<iostream>
#include<algorithm> 
using namespace std;
//Rotating matrix by 90 degree clockwise - complexity O(n^2)
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
    /*for(int i=0; i<3; i++){         //complexity O(n^2)
        int start = 0;
        int end = 2;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }*/
   //using reverse function from algorithm header
    for(int i=0; i<3; i++){         //complexity O(n^2)
         reverse(arr[i], arr[i]+3);
    }

    cout<<"Rotated Matrix by 90 degree clockwise: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}