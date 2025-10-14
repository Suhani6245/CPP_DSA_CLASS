#include<iostream>
using namespace std;
int main(){
    int n=81;
    /*cout<<"Enter a number: ";
    cin>>n;*/
    /*if(n%9==0) cout<<"Divisible by 9"<<endl;
    else cout<<"Not divisible by 9"<<endl;
    return 0;*/
    /*char a = 'B';
    if(a=='A' || a=='Z') cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/
    if(n%9==0){
        cout<<"Divisible by 9"<<endl;
        if(n%2==0) cout<<"EVEN"<<endl;
        else cout<<"ODD"<<endl;
    }
    else cout<<"Not divisible by 9"<<endl;
    return 0;
}