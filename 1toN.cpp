#include<iostream>
using namespace std;
void printNum(int n){
    /*if(n>0){          //print in normal order
        printNum(n-1);
        cout<<n<<" ";
    }*/
   /*if(n==1){           //print in normal order
         cout<<n<<" ";
         return;
   }
    printNum(n-1);           
    cout<<n<<" ";*/
    if(n==1){           //print in reverse order
         cout<<n<<" ";
         return;
    }
    cout<<n<<" ";
    printNum(n-1);
    
}
int main(){
    int n= 5;
    /*cout<<"Enter a number: ";
    cin>>n;*/
    printNum(n);
    return 0;
}