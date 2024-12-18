#include <iostream>
#include <vector>
#include "university.h"
#include "student.h"

using namespace std;

int main() {
    student C1({"karim"}, 1, {1234}, {13.45});

    C1.display_university();

    cout << endl;
    C1.ajout_student();
    cout << "\n" << endl;
    C1.display_student();

    return 0;
}
