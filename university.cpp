#include <iostream>
#include <vector>
#include "university.h"

using namespace std;

int university::get_matricule(size_t index) {
    return matricule[index]; // Return the matricule at the given index
}

void university::set_matricule(int s) {
    matricule.push_back(s + 1); // Increment and store the new matricule
}

void university::display_university() {
    cout << "Number of students: " << nom.size() << endl;

    for (size_t i = 0; i < nom.size(); i++) {
        cout  << "Student " << nom[i] << " corresponds to matricule " << get_matricule(i) << endl;
    }
}
