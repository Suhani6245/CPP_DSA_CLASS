#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int marks;
    student(string n, int a, int m){      //constructor
        name = n;
        age = a;
        marks = m;
    }
};

int main(){
    student s1("Alice", 20, 85);
    student s2("Bob", 22, 90);
    cout<<"Student 1: "<<s1.name<<", Age: "<<s1.age<<", Marks: "<<s1.marks<<endl;    //accessing public member variables
    cout<<"Student 2: "<<s2.name<<", Age: "<<s2.age<<", Marks: "<<s2.marks<<endl;
    return 0;
}