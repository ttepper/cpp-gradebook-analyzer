#ifndef ASSIGNMENT2_GRADEBOOK_H
#define ASSIGNMENT2_GRADEBOOK_H

#include <vector>
using namespace std;
#include <iostream>

namespace std {
    class GradeBook {
    private:
        vector<int> grades; //private vecotr which will store our original grades
    public:

        GradeBook(); //Constructor which creates an instance of our class
        //The object is being built so there is nothing to return
        void addGrade(int grade); //method with no return type that will add a grade to our gradebook
        void printGrades() const; //method with no return type that will print the grades in our gradebook
        int getGrade(int index) const; //gets the grade at the index that is passed in as a parameter
        int getSize() const; //gets the size of our gradebook vector
        GradeBook duplicateGradeBook(const GradeBook& source); //method that will duplicate a gradebook, it takes in a gradebook as a parameter and returns a copy of that gradebook
        GradeBook removeHighestGrade(const GradeBook& source); //method that will remove the highest grade from a gradebook, it takes in a gradebook as a parameter and returns a copy of that gradebook with the highest grade removed
    };
}

#endif //ASSIGNMENT2_GRADEBOOK_H