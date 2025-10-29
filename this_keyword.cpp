#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int marks;
    public:
    Student(string name, int marks){
        this->name = name;   //this pointer is used to resolve naming conflict between class member and parameter
        this->marks = marks;    //using this pointer to access class member
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student s1("Abhishek", 69);
    s1.display();   
}