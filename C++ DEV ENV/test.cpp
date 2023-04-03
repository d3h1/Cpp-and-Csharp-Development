#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;

    int temp = a;
    a = b;
    temp = b;

    cout << "The swapped value of A is: "<< a;
    cout << "\nThe swapped value of B is: "<< b;


    return 0;
}