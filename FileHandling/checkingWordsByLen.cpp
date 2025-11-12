#include<iostream>
#include<fstream>
using namespace std;
int main(){

        //creating file named exmple.txt
        ofstream outputFile("example.txt"); // Creates or opens "example.txt"
        outputFile << "Aditi and Suhani in Manali" << endl;
        outputFile.close();

        //opening file in read mode
        ifstream file("example.txt");
        if(!file){
            cout<<"File not found!";
            return 0;
        }
        //checking for word
        string word;
        while(file>>word){
            if(word.length()>4) cout<<word<< endl;
        }

        return 0;
}