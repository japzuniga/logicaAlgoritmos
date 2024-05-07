#include <iostream>
using namespace std;

void checkear(int num) {
    bool prime = true;
    int i = 2;
    while (i < num) {
        if (num%i == 0) {
            prime = false;
            break;
        }

        i++;
    }

    if (prime == true) {
        cout << num << " es primo" << endl;
    } else {
        cout << num << " no es primo" << endl;
    }
}

main() {
    int num;
    cout << "ingrese un numero: ";
    cin >> num;
    checkear(num);
}