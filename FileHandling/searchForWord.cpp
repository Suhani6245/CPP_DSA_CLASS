#include<iostream>
#include<fstream>
using namespace std;
int main(){


        bool check = false;

        string searchWord = "Manali";

        /* string searchWord;
         cout<<"Enter word to search: ";
         cin>>searchWord;*/

        cout<<"Searching for -"<<searchWord<<"- in file..."<<endl;

        ifstream file("example.txt");
        if(!file){
            cout<<"File not found!";
            return 0;
        }
        //search for searchWord in example.txt
        string word;
        while(file>>word){
            if(word == searchWord) {
             check = true;
             break;
            }
            
        }

        if(!check) cout<<searchWord<<" not found!"<< endl;
        else cout<<searchWord<<" found!"<< endl;

        file.close();
        
        return 0;
}