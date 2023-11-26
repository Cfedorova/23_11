#include "student.h"

void student::Input() {
    cout << "name: ";
    cin >> name;
    cout << "age: ";
    cin >> age;
    cout << "average_mark: ";
    cin >> average_mark;
    cout << endl;

}

void student::Print() {
    cout << "My name is " << name << "." << endl;
    cout << "I am " << age << " years" << ". [" << average_mark << "]\n";
}



