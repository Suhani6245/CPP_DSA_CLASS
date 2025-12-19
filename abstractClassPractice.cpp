//problem statement: create a notification service that can send message via SMS and Email
//Requirements: abstract class Notification, Contract send, concrete classes SMS and Email

/*#include<iostream>
using namespace std;

class Notification{   //abstract class
    public:
    virtual void send(string message) = 0; //pure virtual function
};

class SMS : public Notification{  //concrete class
    public:
    string phone_number;
    SMS(string p_n){
        phone_number = p_n;
    }
    void send(string message){
        cout<<"Sending SMS to "<<phone_number<<": "<<message<<endl;
    }
};

class Email: public Notification{
    public:
    string email_address;
    Email(string e_a){
        email_address = e_a;
    }
    void send(string message){
        cout<<"Sending Email to "<<email_address<<": "<<message<<endl;
    }
};

int main(){
    Notification* n1 = new SMS("123-456-7890");
    Notification* n2 = new Email("abc@gmail.com");
    n1->send("Hello via SMS");
    n2->send("Hello via Email");
    delete n1;
    delete n2;
    return 0;           
}*/

//Problem statement: create a functionality that calculates area of different shapes

/*#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calArea() = 0;   // pure virtual function  
};

class Rectangle : public Shape {
public:
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double calArea() {
        return length * breadth;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double calArea(){
        return 3.14 * radius * radius;
    }
};

class Triangle : public Shape {
public:
    double base, height;

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double calArea(){
        return 0.5 * base * height;
    }
};

int main() {
    Shape* s1 = new Rectangle(4.0, 5.0);
    Shape* s2 = new Circle(3.0);
    Shape* s3 = new Triangle(4.0, 6.0);

    cout << "Area of Rectangle: " << s1->calArea() << endl;
    cout << "Area of Circle: " << s2->calArea() << endl;
    cout << "Area of Triangle: " << s3->calArea() << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}*/

//design a  game having different characters, each character has 2 moves - attack, defend
#include<iostream>
using namespace std;

class Character{
    public:
    virtual void attack() = 0;
    virtual void defend() = 0;
};

class char1: public Character{
    public:
    

    void attack(){
        cout<<"Char 1 attacked!\n";
    }

    void defend(){
        cout<<"Char 1 defended!\n";
    }
};

class char2: public Character{
    public:
    

    void attack(){
        cout<<"Char 2 attacked!\n";
    }

    void defend(){
        cout<<"Char 2 defended!\n";
    }

    
};

class char3: public Character{
    public:
    

    void attack(){
        cout<<"Char 3 attacked!\n";
    }

    void defend(){
        cout<<"Char 3 defended!\n";
    }
  
};

int main(){
    Character* c1 = new char1;
    Character* c2 = new char2;
    Character* c3 = new char3;

    c1->attack();
    c2->defend();
    c3->defend();

    delete c1;
    delete c2;
    delete c3;

    return 0;
    
}
