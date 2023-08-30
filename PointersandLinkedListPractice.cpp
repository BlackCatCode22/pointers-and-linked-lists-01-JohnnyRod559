#include <iostream>

using namespace std;

int main() {
    string userInput = "";

    cout << " Welcome to pointers and linked list practice! \n\n";

    cout << " Please enter your name: ";
    cin >> userInput;

    cout << "\n Welcome " << userInput << "! " << endl;

    int num1 = 5;
    cout << "\n" << &num1 << endl;

    int* ptr = &num1;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << num1 << endl;

    int num2;
    int* ptr2 =&num2;
    *ptr2 =7;
    cout << "num2= " << num2 << endl;
    cout <<"\n\n";

    int age = 19;
    int* pAge = &age;
    double gpa = 2.7;
    double* pGpa = &gpa;
    string name = "Johnny";
    string* pName = &name;

    cout << "Age: " << &age << endl;
    cout << "gpa: " << &gpa << endl;
    cout << "name: " << &name << endl << endl;

    cout << pAge << endl;

    cout << *pAge << endl;





    return 0;
}
