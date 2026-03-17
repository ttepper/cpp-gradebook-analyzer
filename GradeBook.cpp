#include <iostream>
#include <vector>
#include "GradeBook.h"

namespace std {
    GradeBook::GradeBook() {
        //no initialization is required
    }

    void GradeBook::addGrade(int grade) {
        grades.push_back(grade); //push back means add the grade to the end of the vector
    }

    void GradeBook::printGrades() const {
        for (int i = 0; i < grades.size(); i++) { //iterate through the vector
            cout << grades[i] << endl; //print the grade at index i
        }
    }
    //This function needs the index of a grade in the gradebook
    //This function returns the grade at that index
    int GradeBook::getGrade(int index) const {
        //const so we dont change the vector
        //use vector functions
        return grades[index];
    }
    int GradeBook::getSize() const { //getSize function that will get the size of our gradebook vector
        return grades.size(); //returns the size
    }
}