
//reference variable - a reference variable is an alias for another variable.

#include<iostream>
using namespace std;
int main(){
    int a = 5;  
    int &b = a;  //b is just another name assigned to the variable 'a'
    b++;
    cout<<a;     // output: 6
    return 0;
}