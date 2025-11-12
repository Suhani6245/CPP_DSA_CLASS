#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[5] = {"Home", "Car","Manali","Aditi","Haha"};
    cout<<"Og string array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Words having length > 4: ";
    for(int i=0; i<5; i++){
        if(arr[i].size()>4) cout<<arr[i]<<" ";
    }
    return 0;
}