#include<iostream>
#include<fstream>
using namespace std;
class Employee{
    public:
    int id;
    int salary;

    // A default constructor is helpful when creating an empty object to read data *into*
    Employee() : id(0), salary(0) {} 


    Employee(int ID, int sal){
        id = ID;
        salary = sal;
    }

};

int main(){
    ofstream file("employee.dat", ios::binary | ios :: app);
    Employee e1(1,10000);
    file.write((char*)&e1, sizeof(e1));
    Employee e2(2,20000);
    file.write((char*)&e2, sizeof(e2));
    Employee e3(3,30000);
    file.write((char*)&e2, sizeof(e2));

    file.close();

    
    // 1. Open the file for reading in binary mode
    ifstream File("employee.dat", ios::binary);

    /*if (!File.is_open()) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }*/

    Employee currentEmployee;
    cout << "Reading employees from file:" << endl;
    cout << "----------------------------" << endl;

    // 2. Read data in a loop until the end of the file
    // The read() function returns the stream itself, which can be evaluated in the while condition.
    // The loop fails (stops) when a read operation fails (e.g., reaching EOF).
    while (File.read(reinterpret_cast<char*>(&currentEmployee), sizeof(currentEmployee))) {
        cout << "ID: " << currentEmployee.id << ", Salary: " << currentEmployee.salary << endl;
    }

    cout << "----------------------------" << endl;

    // 3. Close the file
    File.close();

    /*// 4. Check why the loop terminated (optional, but good practice)
    if (File.eof()) {
        cout << "----------------------------" << endl;
        cout << "Reached end of file successfully." << endl;
    } else if (File.fail()) {
        cerr << "An error occurred during reading." << endl;
    }*/

    //counting number of records in the binary file
    ifstream CountFile("employee.dat", ios::binary);
    int n= sizeof(e1);
    CountFile.seekg(0, ios::end); // Move to the end of the file
    int totalFileSize = CountFile.tellg();

    int countOfRecords = totalFileSize/n;

    cout<<"No. of records in file : "<< countOfRecords<<endl;

    CountFile.close();


    return 0;



}