#include<iostream>
#include<string>
using namespace std;
//if a class contains pointer data members, we need to define a destructor to free the dynamically allocated memory to avoid memory leaks.

class Student {
    string* name;
    public:
    Student(string n) {                         //constructor
        cout<<"Running constructor"<<endl;
        name = new string;              //dynamic memory allocation - must free memory manually
        *name = n;
    }
    ~Student() {                                //destructor
        cout<<"Running destructor"<<endl;
        delete name;                     //freeing dynamically allocated memory
    }
    void display() {
        cout<<"Name: "<<*name<<endl;
    }
};
int main() {
    cout<<"Creating object s1"<<endl;
    Student s1("Abhishek");        //static memory- frees memory automatically
    s1.display();
    return 0;
}