//type conversion - depends on priority of data types
//bool<char<short<int<long<float<double<long double
//implicit type conversion
//explicit type conversion - type casting
#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    //implicit
    /*int x=3;
    char y= 'a';
    if(x<y) cout<<"y is greater than x"<<endl;
    else cout<<"x is greater than y"<<endl;
    float y=5.45;
    cout<<x+y<<endl;  //3+5.45=8.45
    return 0;*/


    //explicit
    int x=3;
    int a=float(x);
    cout<<typeid(a).name()<<endl;   //to get data type of variable
    cout<<(float)x<<endl; 
    char y= 'a';
    cout<<(int)y<<endl;
    int z= 65;
    cout<<(char)z<<endl;
    cout<<(float)(x+y)<<endl; 
    return 0;
}