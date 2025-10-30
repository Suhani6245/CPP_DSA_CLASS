    #include <string>
    #include <iostream>
    using namespace std;

    int main() {
        /*std::string s1 = "Hello";
        std::string s2 = " World";

        s1.append(s2); // Appends s2 to s1
        std::cout << s1 << std::endl; // Output: Hello World

        s1.append("!"); // Appends a C-style string
        std::cout << s1 << std::endl; // Output: Hello World!

        s1.append(3, '.'); // Appends three dots
        std::cout << s1 << std::endl; // Output: Hello World!...

        return 0;*/

        string str = "Hello, World!";
        string substr = "World";
        if(str.find(substr)==string::npos){        //npos means not found 
            cout<<substr<<" Not Found"<<endl;
        }
        else{
            cout<<substr<<" Found"<<endl;
        }

        string substr2 = "small";
        if(str.find(substr2)==string::npos){
            cout<<substr2<<" Not Found"<<endl;
        }
        else{
            cout<<substr2<<" Found"<<endl;
        }

    }