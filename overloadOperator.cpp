#include<iostream>
#include<vector>
using namespace std;

/*class vector2D{
    int x, y;
    public:
    vector2D(int x, int y): x(x), y(y){};
    void show(){
        cout<<x<<"i "<<y<<"j";
    }

    int operator * (vector2D b){ //overloading * operator
    return x*b*x + y*b*x;
    }
    
};



int main(){
    vector2D v1(2,3);
    vector2D v1(-3,2);
    
    cout<<v1*v2;}*/

/*class Demo{
    vector<int>v;
    public:
    Demo(vector<int>v){
        this->v = v;
    }

    void show(){
        for(int num:v){
            cout<<num<<" ";
        }
        cout<<endl;
    }

    void operator [] (int a){       //overloading [] operator
        for(int num:v){
            cout<<num*a<<" ";
        }
    }
    
};


int main(){
    Demo v({1,2,3,4,5});
    v.show();
    v[2];
}*/

/*class sum{
    vector<int>arr;
    int sumToN=0;
    public:
    sum(vector<int>arr){this->arr=arr;}
    void show(){
        cout<<"Sum: "<<sumToN<<endl;
    }

    int operator () (int a){       //overloading () operator
        if(a>arr.size()) cout<<"Out of bounds"<<endl;
        else{
        for(int i=0; i<a; i++){
            sumToN+=arr[i];
        }
        return sumToN;
    }
    }
};

int main(){
    sum v({1,2,3,4,5});
    v(4);   //v(<firstWhatElements>)
    v.show();
}*/

/*class Demo{
    vector<int>arr;
    public:
    Demo(vector<int>v){
        arr = v;
    }

    void show(){
        for(int num:arr){
            cout<<num<<" ";
        }
    }

    Demo operator + (Demo d2){       //overloading + operator to merge two vectors
        vector<int>ans = arr;
        //ans.insert(ans.end(), d2.arr.begin(),d2.arr.end());     works
        //for(int num:arr) ans.push_back(num);  //push if ans not initialized with arr
        for(int num: d2.arr) ans.push_back(num);
        return ans;
    }

};

int main(){
    Demo d1({1,2,3,4});
    Demo d2({5,6,7,8});
    Demo d3 = d1+d2;
    d3.show();
}*/



//write a student class with << overload and >> overload, << decrements marks by x and >> increaments marks by x
class Student{
    int marks;
    int finalMarks;
    public:
    Student(int m){
        marks = m;
    }
    void show(){
        cout<<"Changed Marks: "<<finalMarks<<endl;
    }
    Student operator >> (int s){
        finalMarks = marks + s;
        return finalMarks;
    }
    Student operator << (int s){
        finalMarks = marks - s;
        return finalMarks;
    }

};

int main(){
    Student s1(20);
    Student s2(100);
    s1>>20;
    s1.show();
    s2<<30;
    s2.show();
}

