#include <iostream>
using namespace std;

int LSA(int number) {
    int array[12] = {10, 20, 30, 40, 50, 30, 70, 80, 30, 99, 12, 23}; 
    bool found = false; 

    for (int index = 0; index < 12; index++) {
        if (array[index] == number) {
            cout << "The number is found at index: " ;
            found = true;
        }
    }

    if (!found) {
        cout << "The number is not found";
    }

    return found ? 1 : 0; // Return 1 if found, else 0
}

int main() {
    LSA(30); 
    return 0;
}
