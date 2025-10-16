#include<iostream>
using namespace std;
int new2(int a, int b){
    a = 300;
    b = 400;
    cout<<"new2 function values: ";
    cout<<a<<" "<<b;
}

int new3(int &a, int &b){
    a = 300;
    b = 400;
    cout<<"new3 function values: ";
    cout<<a<<" "<<b;
}
int main(){
    int n1=100, n2=200;
    cout<<"main function values before funtion call: "<<n1<<" "<<n2<<endl;
    new2(n1,n2);      //pass by value
    cout<<endl<<"main function values after function call: ";
    cout<<n1<<" "<<n2;
    cout<<endl;
    cout<<"main function values before funtion call: "<<n1<<" "<<n2<<endl;
    new3(n1,n2);      //pass by reference   

}