#include<iostream>
using namespace std;

#include<bits/stdc++.h>  //includes all standard libraries;
/* #define pi 3.14;      //does not occupy space in memory
int main()
{
    const int x = 20;
    cout<<x<<endl;
    //x = 30;       error; const value cannot be changed
    cout<<x;
    cout<<pi;
}*/

/*int main(){
    long int c;
    cout<<sizeof(long)<<endl;
}*/

//range of int = -2**31 to 2**31 -1
/*int main(){
    int x = INT_MAX+1;    //INT_MAX= 2**31 -1 
    cout<<x<<endl;      //overflow
    int y = INT_MIN-1;    //INT_MIN= -2**31
    cout<<y<<endl;      //underflow
}*/

int main(){
    /*string s = "CPP";
    cout<<s<<endl; */
    string s;
    cout<<"Enter a string: ";
    cin>>s;   //input only one word
    cout<<"You entered: "<<s<<endl;
    getline(cin,s); //input a line with spaces
    cout<<"You entered: "<<s<<endl;
}


