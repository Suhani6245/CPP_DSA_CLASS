#include<iostream>
#include<string>
#include<stack>
using namespace std;

int evaluate(int a, int b, char op){
    switch (op){
        case '+': return a+b; break;
        case '-': return a-b; break;
        case '*': return a*b; break;
        case '/': return a/b; break;
        case '%': return a%b; break;
    }

}

int main(){
    //time complexity = O(N), space complexity = O(N)
    //prefix
    /*
    string s = "*6+25"; //prefix
    stack<int> exp;
    for(int i=s.size()-1; i>=0; i--){     //traversing right to left
        if(isdigit(s[i])) {
            int val = s[i] - '0';    //character - '0' turns character into integer
            exp.push(val);
        }
        else{
            int x = exp.top(); exp.pop();
            int y = exp.top(); exp.pop();
            exp.push(evaluate(x,y,s[i]));
        }
    }

    cout<<"Result of "<<s<<": "<<exp.top(); 
    */

    //postfix
    string s = "25+3*"; //postfix
    stack<int> exp;
    for(int i=0; i<s.size(); i++){     //traversing left to right
        if(isdigit(s[i])) {
            int val = s[i] - '0';    //character - '0' turns character into integer
            exp.push(val);
        }
        else{
            int x = exp.top(); exp.pop();
            int y = exp.top(); exp.pop();
            exp.push(evaluate(x,y,s[i]));
        }
    }

    cout<<"Result of "<<s<<": "<<exp.top(); 

}