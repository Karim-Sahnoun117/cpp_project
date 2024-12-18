#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

void student::ajout_student() {
    string L;
    size_t f;
    float m;
    int press;
    size_t nouv;

    cout << "Do you want to add a student? (1 for yes, 0 for no)" << endl;
    cin >> press;

    while (press == 1) {

        nouv = get_matricule(nom.size() - 1);
        cout << "The last student has a matricule " << nouv << endl;

        cout << "Enter the new student's name: " << endl;
        cin >> L;
        nom.push_back(L);

        set_matricule(nouv);
        cout << "Enter the associated average for this student: " << endl;
        cin >> m;
        moyenne.push_back(m);

        cout << "Do you want to add another student? (1 for yes, 0 for no)" << endl;
        cin >> press;
    }
}

void student::display_student() {
    display_university();

    for (size_t i = 0; i < moyenne.size(); i++) {
        cout << "Student " << nom[i] << " has an average of " << moyenne[i] << endl;
    }
}
