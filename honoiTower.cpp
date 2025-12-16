#include <iostream>
#include <vector>
#include <string>
using namespace std;
//O(2**n)
// Function to solve the Tower of Hanoi puzzle
// n: number of disks to move
// source: the starting rod
// auxiliary: the helper rod
// destination: the target rod
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If there are no disks to move, return
    if (n == 0) {
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary, using destination as the helper
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the largest (nth) disk from source to destination
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;

    // Step 3: Move the n-1 disks from auxiliary to destination, using source as the helper
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks = 3; // You can change this number
    cout << "Steps to solve Tower of Hanoi with " << numDisks << " disks:" << endl;

    // Call the function with source 'A', destination 'C', and auxiliary 'B'
    towerOfHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}
