#include<iostream>
using namespace std;
//virtual keyword is used to achieve run-time polymorphism in C++
//run-time polymorphism/ dynamic polymorphism/ late binding - decided during run-time
//eg. method overriding with virtual keyword is used to turn the compile time polymorphism to run time. 

//Method overriding
class Base{
    public:
    /*void show(){    //function without virtual will work as compile time polymorphism
        cout<<"Base called!\n";
    }*/

    virtual void show(){     //virtual helps the compiler to call the show() that has the object type called, here it is Derived type 
        cout<<"Base called!\n";
    }
};

class Derived : public Base{
    public:
    void show(){
        cout<<"Derived called!\n";
    }
};

int main(){
    Base* b = new Derived();    //new is used for dynamic memory allocation and hence stored in pointer
    Derived* d = new Derived();
    b->show();
    d->show();  //the show function of Derived class is called both times because of virtual keyword it depends on the object type being called not the pointer type, here both are Derived type
    return 0;
}