#include<iostream>
using namespace std;

int sumOfN(int n) {  //tc = O(n), sc = O(n) due to recursion stack
    // Base case
    if (n == 1) {
        return 1;
    }
    // Recursive case
    return sumOfN(n - 1)+n;
}

int main(){
    int n = 5;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfN(n) << endl;
    return 0;
}