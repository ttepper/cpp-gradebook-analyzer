#include <iostream>
#include <vector>
#include "GradeAnalyzer.h"
#include "GradeBook.h"
using namespace std;
//Before Class on Wednesday, run the following in the main() function:
//You will add 3 grades to a gradebook called original, print the grades
//You will then remove the highest grade using your new function and the original gradebook

//Duplicating the GradeBook
GradeBook duplicateGradeBook(const GradeBook& source) {
    GradeBook copy; //We will call our new gradebook copy
    //In this example, we are going to copy from the source, therefore naming our GradeBook copy works
    //We will need getGrade and we will need a for loop and we will need addGrade
    //We will also need getSize

    for (int i = 0; i < source.getSize(); i++) {
        copy.addGrade(source.getGrade(i)); //We copy the grade at i of source gradebook and put it into the copy gradebook
    } return copy;
}

//Removing the highest grade
//We will want the copy of the gradebook
GradeBook removeHighestGrade(const GradeBook& source) {
    //We want a copy
    GradeBook copy; //We will construct our copy, our vector is size 0 because there is nothing in it
    int highestGrade = source.getGrade(0); //We begin by getting the grade at index 0 and assume it is the highest grade
    int highestIndex = 0; //Our index is at the beginning
    for (int i = 0; i < source.getSize(); i++) {
        //temp variable TBD
        if (source.getGrade(i) > highestGrade) {
            highestGrade = source.getGrade(i);
            highestIndex = i;
        }
    }
        //Now we want to copy the gradebook
        //We will use a for loop and another if statement
        for (int j = 0; j < source.getSize(); j++) {
            if (j != highestIndex) {
                copy.addGrade(source.getGrade(j));
            }
        } return copy;
    }

GradeBook removeLowestGrade(const GradeBook& source) { //Standalone function removing lowest grade
    GradeBook copy; //We will construct our copy, our vector is size 0 because there is nothing in it
    int lowestGrade = source.getGrade(0); //We begin by getting the grade at index 0 it is the lowest grade
    int lowestIndex = 0; //Our index is at the beginning
    for (int i = 0; i < source.getSize(); i++) { //iterate through the gradebook
        if (source.getGrade(i) < lowestGrade) { //check if the grade is less than the lowest grade
            lowestGrade = source.getGrade(i); //if less than the loweest grade we update the lowest grade
            lowestIndex = i; //we also update the index of the lowest grade
        }
    }
    //Now we want to copy the gradebook
    //We will use a for loop and another if statement
    for (int j = 0; j < source.getSize(); j++) { //second for loop to copy the gradebook
        if (j != lowestIndex) { //if the index is not the lowest index, we add the grade at index j to the copy gradebook
            copy.addGrade(source.getGrade(j)); //if the index is the lowest index we skip it and do not add it to the copy gradebook
        }
    } return copy; //return the copy gradebook with the lowest grade removed
}

double getAverageGrade(const GradeBook& grades) { //2nd standalone function that will get the average grade of a gradebook
    double sum = 0; //Store the sum of grades
    for (int i = 0; i < grades.getSize(); i++) { //iterate through the gradebook
        sum += grades.getGrade(i); //add the grade at index i to the sum
    } return sum / grades.getSize(); //return the average by dividing the sum by the size of the gradebook
}
//We can remove lowest grade in the main() function
//We can essentially implement double getAverageGrade(const GradeBook& grades) in the
int main() {

    GradeBook original; //object for original gradebook
    vector <int> startingGrades = {72, 95, 88, 60, 95}; //vector of starting grades to be added to the original gradebook
    for (int i = 0; i < startingGrades.size(); i++) { //for loop to iterate through the startingGrades vector
        original.addGrade(startingGrades[i]); // add the grades in the startingGrades vector to the original gradebook
    }
    GradeAnalyzer analyzer; //object for grade analyzer
    cout << "Original GradeBook:" << endl;
    original.printGrades(); //print the original gradebook

    GradeBook noLowest = removeLowestGrade(original); //object for gradebook with lowest grade
    GradeBook curved = analyzer.applyCurve(original); //object for gradebook with curve applied
    GradeBook capped = analyzer.applyCapCurve(original); //object for gradebook with capped curve applied

    cout << "Original Average: " << getAverageGrade(original) << endl; //print the average of the original gradebook

    cout << "After Removing Lowest Grade" << endl;
    noLowest.printGrades(); //print the gradebook with the lowest grade removed
    cout << "Average: " << getAverageGrade(noLowest) << endl; //print the average of the gradebook with the lowest grade removed

    cout << "After Applying Curve" << endl;
    curved.printGrades(); //print the gradebook with the curve applied
    cout << "Average: " << getAverageGrade(curved) << endl; //print the average of the gradebook with the curve applied

    cout << "After Applying Capped Curve " << endl;
    capped.printGrades();//print the gradebook with the capped curve applied
    cout << "Average: " << getAverageGrade(capped) << endl;

    cout << "Final Check: Original GradeBook remains unchanged" << endl;
    original.printGrades(); //print the original gb to show

    return 0;
}