#include<iostream>
using namespace std;


//1. forgetting delete
void leak(){
    int *p = new int[10];
    //p lost never freed
}

void no_leak(){
    int *p = new int[10];
    delete p;
    //no leak
}

//Rule: every new -> exactly one delete

//2. missing virtual destructor
class Base{
    public:
    /*~Base(){
        cout<<"Base destructor called!\n";
    }*/
     virtual ~Base(){
        cout<<"Base destructor called!\n";    //correct way is to use a virtual destructor
    }

};

class Derived : public Base{
    int *data = new int(5);
    public:
    ~Derived(){
        delete data;  //<-
        cout<<"Derived destructor called!\n";
    }
};

int main(){
    Base* b = new Derived();    //new is used for dynamic allocation and hence stored in pointer
    delete b; //base destructor will be called because it depends on the Object type which is Base* ;
    return 0;
}


//3. overwriting pointers

void leak(){
    int *p = new int[10];
    p = new int[20];   //previously allocated memory is lost, memory leak
    delete p; //this will delete int(20) but then the old int(10) will be lost and still occupied
    //leak
}

void no_leak(){
    int *p = new int[10];
    delete p;
    p=new int(20);
    delete p;
    //no leak
}

