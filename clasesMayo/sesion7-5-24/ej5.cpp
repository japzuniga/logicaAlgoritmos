#include <iostream>
using namespace std;

main() {
    int num;
    cout << "ingrese un numero: ";
    cin >> num;
    
    bool prime = true;
    int i = 2;
    while (i < num) {
        if (num%i == 0) {
            prime = false;
            break;
        }
        i++;
    }
    
    if (num == 1) {
        cout << "1 no es primo";
    } else if (prime == true) {
        cout << num << " es primo" << endl;
    } else {
        cout << num << " no es primo" << endl;
    }
}