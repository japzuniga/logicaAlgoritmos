#include <iostream>
#include "variables.h"
using namespace std;

//CRUD: create, read, update, delete
void addReg();
void showReg();
void menu();

void addReg() {
    cout << "\n\t\tSTUDENT INFO\n";
    cout << "------------------------------------------------" << endl;
    cout << "CIF: ";
    scanf(" %[^\n]", students[position].cif);
    cout << "FIRST AND MIDDLE NAMES: ";
    scanf(" %[^\n]", students[position].name);
    cout << "LAST NAMES: ";
    scanf(" %[^\n]", students[position].lastName);
    cout << "YEAR: ";
    scanf("%d", &students[position].year);
    
    cout << "\nEstudiante registrado...\n\n";
    position++;
}

void showReg() {
    cout << "\n\t\tSTUDENTS\n";
    for (int i = 0; i < position; i++) {
        cout << "------------------------------------------------" << endl;
        cout << "CIF: " << students[i].cif << endl;
        cout << "NAMES: " << students[i].name << " " << students[i].lastName << endl;
        cout << "YEAR: " << students[i].year << endl;
    }
}

void menu() {
    int option = 0;
    do {
        system("cls || clear");
        cout << "1. Add student\n";
        cout << "2. Show students\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                addReg();
                system("pause");
                break;
            case 2:
                showReg();
                system("pause");
                break;
            case 3:
                cout << "\nClosing...\n";
                break;
            default:
                cout << "\nInvalid option...\n";
                break;
        }
    } while (option != 3);
}