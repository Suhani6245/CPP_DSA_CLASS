#include<iostream>
using namespace std;
//abstract class - a class that contains at least one pure virtual function
//pure virtual function - a virtual function that is set to 0
class payment_method{   //abstract class
    public:
    virtual void pay() = 0; //pure virtual function
};

class credit_card : public payment_method{  //concrete class- derived from abstract class
    public:
    string card_number;
   
    credit_card(string card_number){
        card_number=card_number;
    }

     void pay(){
        cout<<"Paid using credit card\n";
    }
};  

class UPI : public payment_method{              //concrete class
    public:
    string upi_id;
    UPI(string upi_id){
        upi_id=upi_id;
    }

     void pay(){
        cout<<"Paid using UPI\n";
    }
};

int main(){
    payment_method* p1 = new credit_card("1234-5678-9012-3456");
    payment_method* p2 = new UPI("user@upi");   
    p1->pay();
    p2->pay(); 
    return 0;
} 