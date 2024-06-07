#include <iostream>
#include <string>
#include "variables.h"
using namespace std;

city cities[MAX_REG];
int position = 0;

//funciones:
void add(city *city);
city find(int id);
int findPos(int id);
void update(city *city, int id);
void DESTROY(int id);
void askInput();
void showCities();
int menu();
void principal();

void add(city *city) {
    cities[position] = *city;
    position++;
}

city find(int id) {
    city city;
    for (int i = 0; i < position; i++) {
        if (cities[i].id == id) {
            return cities[i];
        }
    }

    return city;
}

int findPos(int id) {
    for (int i = 0; i < position; i++) {
        if (cities[i].id == id) return i;
    }

    return -1;
}

void update(city *city, int id) {
    int posi = findPos(id);
    city->name = cities[posi].name;
    city->description = cities[posi].description;
}

void DESTROY(int id) {
    int pos = findPos(id);
    for (int i = pos; i < position-1; i++) {
        cities[i] = cities[i+1];
    }

    city temp;
    cities[position] = temp;
    position--;
}

void askInput() {
    city city;
    cout << "\nCity Info:";
    cout << "\nID: ";
    cin >> city.id;
    cout << "\nName: ";
    cin >> ws;
    getline(cin, city.name);
    cout << "\nDescription: ";
    cin >> ws;
    getline(cin, city.description);

    add(&city);
}

void showCities() {
    for (int i = 0; i < position; i++) {
        cout << "\n\nCity #" << i+1 << ": ";
        cout << "\nID: " << cities[i].id;
        cout << "\nName: " << cities[i].name;
        cout << "\nDescription: " << cities[i].description;
    }
}

int menu() {
    int opcion;
    cout << "\n\t\tMenu\n";
    cout << "**************************************\n";
    cout << "1. Add\n";
    cout << "2. Edit\n";
    cout << "3. DESTROY\n";
    cout << "4. Find\n";
    cout << "5. Show all cities\n";
    cout << "6. Exit\n";
    cout << "Enter: ";
    cin >> opcion;

    return opcion;
}

void principal() {
    int op;
    do {
        op = menu();
        switch (op) {
            case 1:
                askInput();
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                showCities();
                break;
            case 6:
                cout << "\nExiting program...\n\n";
                break;
            default:
                cout << "\nInvalid option...\n\n";
                break;
        }
    } while (op != 6);
}