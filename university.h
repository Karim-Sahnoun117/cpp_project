#ifndef UNIVERSITY_H_INCLUDED
#define UNIVERSITY_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

class university {
public:
    vector<string> nom;
    int nombre;

private:
    vector<int> matricule;

public:
    university(vector<string> n, int nb, vector<int> mat)
        : nom(n), nombre(nb), matricule(mat) {}

    void display_university();
    void set_matricule(int s);
    int get_matricule(size_t index);
};

#endif // UNIVERSITY_H_INCLUDED
