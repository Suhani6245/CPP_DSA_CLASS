#include<iostream>
#include<fstream>
using namespace std;

//Sequential Access - accessing elements sequentially i.e line by line or word by word

int main(){

        //creating file named exmple.txt
        ofstream fout("data.txt"); // Creates or opens "example.txt"
        string text="This is text";
        fout<<text<<endl;
        fout<<text<<endl;
        fout.close();

        //opening file in read mode
        ifstream fin("data.txt");
        string line;
        while(getline(fin,line)) cout<<line<<endl;
        fin.close();
        
        return 0;
}
