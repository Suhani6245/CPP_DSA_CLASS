#include<iostream>
using namespace std;
int main(){
    int arr1[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int arr2[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    /*for (int i=0; i<5; i++){             //traversal in 2d array
        for (int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
   for (int i=0; i<5; i++){             //adding elements of two 2d arr
    for (int j=0; j<4; j++){
        cout<<arr1[i][j] + arr2[i][j] << " " ;
    }
    cout<<endl;
   }
}