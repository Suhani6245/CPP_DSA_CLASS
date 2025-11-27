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
/*class Quadrilateral{
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
}*/


//create a manager, employee inheritance
/*class Employee{  //base class
    public:
    int id;
    string name;
    int salary;
    void show(){
        cout<<"Designation: "<<name<<", ";
        cout<<"ID: "<<id<<", ";
        cout<<"Salary: "<<salary<<endl;
    }
};
class Manager:public Employee{   //derived class
};

int main(){
    Employee e1;
    e1.id = 100;
    e1.name = "Employee";
    e1.salary = 50000;
    e1.show();  //calls Employee class method

    Manager m1;
    m1.id = 101;
    m1.name = "Manager";
    m1.salary = 80000;
    m1.show();  //calls Manager class method
}
*/

class Employee{
    public:
    int emp_id;
    string name;
    int salary;
    string role;
};

class Manager: public Employee{
    public:
    int manager_id;
    string team_name;
    int team_size;
};

int main(){
    Manager m1;
    m1.emp_id = 1;
    m1.name = "Alice";
    m1.salary = 90000;
    m1.role = "Project Manager";
    m1.manager_id = 101;
    m1.team_name = "Development";
    m1.team_size = 10;

    cout<<"Manager Details:"<<endl;
    cout<<"Employee ID: "<<m1.emp_id<<endl;
    cout<<"Name: "<<m1.name<<endl;
    cout<<"Salary: "<<m1.salary<<endl;
    cout<<"Role: "<<m1.role<<endl;
    cout<<"Manager ID: "<<m1.manager_id<<endl;
    cout<<"Team Name: "<<m1.team_name<<endl;
    cout<<"Team Size: "<<m1.team_size<<endl;

    Employee e1;
    e1.emp_id = 2;
    e1.name = "Bob";
    e1.salary = 60000;
    e1.role = "Developer";
    cout<<"\nEmployee Details:"<<endl;
    cout<<"Employee ID: "<<e1.emp_id<<endl; 
    cout<<"Name: "<<e1.name<<endl;
    cout<<"Salary: "<<e1.salary<<endl;
    cout<<"Role: "<<e1.role<<endl;
    

    return 0;

}