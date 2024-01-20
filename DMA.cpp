#include <iostream>
using namespace std;

int main() {

    //int *p = new int(20); //making and assigning dynamc variable. (uncomment line 6 and comment 6 and 7 to see difference).
    int *p = new int;  //making dynamic variable.
    *p = 20; //assigning value 20 to dynamic variable.

    cout << "output of dynamic veriable: " << *p << endl << endl; //displaying value stored in dynamic variable.

    delete p; //deallocating dynamic variable.

    int *ptr = new int[10]; //making dynamic array of size 10.
    int i;

    for(i = 0; i < 10; i++) {

        ptr[i] = i + 1; //putting value in dynamic array.
    }
    cout << "output of dynamic array: " << endl;

    for(i = 0; i < 10; i++) {

        cout << ptr[i] << endl;
    }
    delete[] ptr; //deallocating dynamic array.

    return 0;
}