#include<iostream>
using namespace std;
/*void display(string name1, string name2="Guest"){    //default argument at last
    cout<<name1<<" & "<<name2<<endl;
};
int main(){
    display("Alice", "Bob");  //both arguments provided; "Guest" is overriden by "Bob"
    display("Charlie");       //only one argument provided, second uses default value
    return 0;
}*/

// arguments priority: provided argument > default argument 

//method overloading
class student{
    public:
    void display(int marks){
        cout<<"Marks: "<<marks<<endl;
    }
    void display(int a, int b){
        cout<<"Marks1: "<<a<<", Marks2: "<<b<<endl;
    }
    /*void display(int marks, int age=18, name="Guy"){   //default argument
        cout<<"Marks: "<<marks<<", Age: "<<age<<"Name :"<<name<<endl;
    } */         
};
int main(){
    student s1;
    s1.display(85);               //calls display(int marks)
    s1.display(90, 95);          //calls display(int a, int b)
    s1.display(88, 20);          
    s1.display(92); 
    //s1.display(75, 19, "Alice");             
    return 0;
}