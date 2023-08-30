#include <iostream>

using namespace std;

int main() {
    string userInput = "";

    cout << " Welcome to pointers and linked list practice! \n\n";

    cout << " Please enter your name: ";
    cin >> userInput;

    cout << "\n Welcome " << userInput << "! " << endl;

    int n = 5;
    cout << "\n" << &n << endl;

    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2 =&v;
    *ptr2 =7;
    cout << "v= " << v << endl;





    return 0;
}
