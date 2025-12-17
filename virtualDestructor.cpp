#include<iostream>
using namespace std;
class Base{
    public:
    /*~Base(){
        cout<<"Base destructor called!\n";
    }*/

    virtual ~Base(){
        cout<<"Base destructor called!\n";       //now thanks to virtual keyword the first destructor called will depend on the new<object type>'s object type
    }
};

class Derived : public Base{
    public:
    ~Derived(){
        cout<<"Derived destructor called!\n";
    }
};

int main(){
    Base* b = new Derived();    //new is used for dynamic allocation and hence stored in pointer
    delete b; //base destructor will be called because it depends on the Object type which is Base* ;
    return 0;
}