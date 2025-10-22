#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    int age;
    public:
    student(int m, int a){
        marks = m;
        age = a;
    }
    friend void display(student s); //friend function declaration
};
void display(student s){   //friend function definition
    cout<<"Marks: "<<s.marks<<", Age: "<<s.age<<endl;
}
int main(){
    student s1(85, 20);
    display(s1);   //friend function call
    return 0;
}