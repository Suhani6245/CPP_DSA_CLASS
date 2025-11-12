#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Suhani123@";
    /*cout << "Enter a string: ";
    getline(cin, str);*/

    // Convert to uppercase
    string upperStr = str;
    for (char &c : upperStr) {
        c = toupper(c);
    }
    cout << "Uppercase: " << upperStr << endl;

    // Convert to lowercase
    string lowerStr = str;
    for (char &c : lowerStr) {
        c = tolower(c);
    }
    cout << "Lowercase: " << lowerStr << endl;

    // Find substring
    string substring = "hani";
    /*cout << "Enter a substring to find: ";
    cin >> substring;*/
    size_t found = str.find(substring);
    if (found != string::npos) {
        cout << "Substring found at index: " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }


    //check for num, special char, aplhabets using built in functions
    bool hasDigit = false, hasAlpha = false, hasSpecial = false;
    for (char c : str) {
        if (isdigit(c)) hasDigit = true;
        else if (isalpha(c)) hasAlpha = true;
        else if (!isspace(c)) hasSpecial = true;
    }

    cout << "Contains Digit: " << (hasDigit ? "Yes" : "No") << endl;
    cout << "Contains Alphabet: " << (hasAlpha ? "Yes" : "No") << endl;
    cout << "Contains Special Character: " << (hasSpecial ? "Yes" : "No") << endl;

    //accessing elements using indexing
    cout << "Characters in the string: ";
    for (size_t i = 0; i < str.length(); ++i) {
        cout << str[i] << ' ';
    }
    cout << endl;

    
    // Concatenation of strings
    string str1 = "Hello";
    string str2 = " World!";

    // Using + operator
    string result1 = str1 + str2;
    cout << "Concatenation using + : " << result1 << endl;

    // Using append() function
    string result2 = str1;
    result2.append(str2);
    cout << "Concatenation using append(): " << result2 << endl;

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5, " C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string
    str.erase(5, 4); 
    cout << "After erase: " << str << endl;

    return 0;
}