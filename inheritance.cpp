#include<iostream>
using namespace std;
/*class Father{
    public:
    void show_surname(){
        cout<<"xyz";
    }
};
class Son:public Father{};
int main(){
    Son s1;
    s1.show_surname();  //calls method from Father class
}*/

/*class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    Dog d1;
    d1.eat();   //inherited method from Animal class
    d1.bark();  //method from Dog class
}*/


//RULE - base class constructor is called first, then derived class constructor is called. 
/*class Base{
    public:
    Base(){
        cout<<"Base class constructor called"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived class constructor called"<<endl;
    }
};

int main(){
    Derived d1;  //when object of derived class is created, base class constructor is called first
}*/


//multilevel inheritance
/*class GrandFather{
    public:
    GrandFather(){
        cout<<"GrandFather class constructor called"<<endl;
    }
    void show_GFather(){
        cout<<"GrandFather class method called"<<endl;
    }
};
class Father: public GrandFather{
    public:
    Father(){
        cout<<"Father class constructor called"<<endl;
    }
    void show_Father(){
        cout<<"Father class method called"<<endl;
    }
};
class Son:public Father{
    public:
    Son(){
        cout<<"Son class constructor called"<<endl;
    }
    void show_son(){
        cout<<"Son class method called"<<endl;
    }
};
int main(){
    Son s1;
    s1.show_Father();  //calls method from Father class
    s1.show_GFather();  //calls method from grandFather class
    s1.show_son();  //calls method from Son class
}*/

//hierarchical inheritance
class Quadrilateral{
    public:
    void show_sides(){
        cout<<"4 sides"<<endl;
    }
};
class Rectangle:public Quadrilateral{
    public:
    void show_shape(){
        cout<<"Rectangle shape"<<endl;
    }
};
class Square:public Quadrilateral{
    public:
    void show_shape(){
        cout<<"Square shape"<<endl;
    }
};
int main(){
    Rectangle r1;
    r1.show_sides();  //calls method from Quadrilateral class
    r1.show_shape();  //calls method from Rectangle class

    Square s1;
    s1.show_sides();  //calls method from Quadrilateral class
    s1.show_shape();  //calls method from Square class
}

