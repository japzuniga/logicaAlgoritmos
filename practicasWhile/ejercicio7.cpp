/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.*/

#include <iostream>
using namespace std;
#define MAX 5

main() {
    int nums[MAX], i = 0;
    while (i < MAX) {
        cout << "ingresar numero " << i+1 << ": ";
        cin >> nums[i];
        i++;
    }

    i = 0;
    while (i < MAX) {
        int j = i+1;
        while (j < MAX) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
            j++;
        }
        i++;
    }

    i = 0;
    cout << "\nel arreglo ordenado ascendientemente es: \n[";
    while (i < MAX) {
        if (i == MAX - 1) {
            cout << nums[i] << "]" << endl;
        } else {
            cout << nums[i] << ", ";
        }
        i++;
    }
}