#include<iostream>
using namespace std;

//without try catch
void allocate_memory1(){
    //int *p = new int[1000000000000000]; //may cause allocation failure, array is too large
}

//with try catch
void allocate_memory2(){
    try{
        //int *p = new int[1000000000000000]; //may cause allocation failure, array is too large
    }
    catch(bad_alloc &e){
        cout<<"Allocation failed: "<<e.what()<<endl;
    }
}