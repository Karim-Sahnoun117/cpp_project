#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <vector>
#include <string>
#include "university.h"

class student : public university {
public:
    vector<float> moyenne;

    student(vector<string> no, int b, vector<int> mot, vector<float> moy)
        : university(no, b, mot), moyenne(moy) {}

    void display_student();
    void ajout_student();
};

#endif  // STUDENT_H_INCLUDED
