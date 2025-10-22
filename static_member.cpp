#include<iostream>
using namespace std;
class vehicle{
    public:
    static int wheels;
    string type;
    vehicle(int w, string t){
        wheels = w;
        type = t;
    }
    static void display(){ //static member function can access only static members
        cout<<"Number of wheels: "<<wheels<<endl;   
       // cout<<"type: "<<type<<endl; // Error: cannot access non-static member 'type' in static member function
    }
};
int vehicle::wheels = 0; // Definition of static member variable
int main(){
    vehicle v1(4, "Car");
    vehicle v2(2, "Bike");         
    cout<<"Vehicle 1: "<<v1.type<<", Wheels: "<<v1.wheels<<endl;
    cout<<"Vehicle 2: "<<v2.type<<", Wheels: "<<v2.wheels<<endl;
    v1.wheels=6;
    cout<<"After modifying wheels using v1:"<<endl;
    cout<<"Vehicle 1: "<<v1.type<<", Wheels: "<<v1.wheels<<endl;
    cout<<"Vehicle 2: "<<v2.type<<", Wheels: "<<v2.wheels<<endl;
    return 0;
}


/*
o/p: 
Vehicle 1: Car, Wheels: 2
Vehicle 2: Bike, Wheels: 2        //here both vehicles share the same static member variable wheels
After modifying wheels using v1:
Vehicle 1: Car, Wheels: 6
Vehicle 2: Bike, Wheels: 6
*/