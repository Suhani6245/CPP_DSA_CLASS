#include<iostream>
using namespace std;
//compile-time polymorphism/ static polymorphism/ Early binding - decided by compiler during compile time
//eg. function overloading, operator overloading

//function overloading
/*class printer{
    public:
    void print(int x){
        cout<<"Int: "<<x<<endl;
    }
    void print(string s){
        cout<<"String: "<<s<<endl;
    }
};

int main(){
    printer p;
    p.print(2);
    p.print("Hello");
    return 0;
}*/

//operator overloading
/*class point{
    public:
    int x,y;
    point(int x, int y) : x(x), y(y){}

    point operator+(point p){
        return point(x + p.x, y + p.y);
    }

    void show(){
        cout<<"x: "<<x << " y: "<<y<<endl;
    }
};

int main(){
    point p1(2,3);
    point p2(4,5);
    point p3 = p1 + p2;
    p3.show();
    return 0;
}*/


//Method overriding
class Base{
    public:
    void show(){
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
    Base* b = new Derived();    //new is used for dynamic allocation and hence stored in pointer
    Derived* d = new Derived();
    b->show();
    d->show();  //the show function of Base class is called because the pointer is of Base class type
    return 0;
}