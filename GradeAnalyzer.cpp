//
// Created by Tyler Tepper on 3/4/26.
//

#include "GradeAnalyzer.h"
using namespace std;

GradeBook GradeAnalyzer::applyCurve(const GradeBook& source) {
    //IF YOU WANT/NEED TO HARD CODE THE CURVE THAT WILL BE USED, YOU MAY
    //You MAY use a multiplication curve (all the grades are multiplied by 1.5 or 2)
    //or you MAY use an addition curve (20 points are added to all of the grades)
    //Dont particularly care how we do our curve
    int multvalue = 2;//this value is used to multiply the grades by
    GradeBook newBook; //object of the new gradebook that is returned
    for (int y = 0; y < source.getSize(); y++) { //for loop to iterate through the gradebook and apply the curve to each grade
        newBook.addGrade(source.getGrade(y) * multvalue); //get the grade at index y and multiply by multvalue

    } return newBook;
}

GradeBook GradeAnalyzer::applyCapCurve(const GradeBook& source) { //similar method but checks the condition
    //if the grade is above 100 and if it is, it adds 100 instead of the bumped grade
    GradeBook newBook; //object of new gradebook
    for (int y = 0; y < source.getSize(); y++) { //for loop to iterate through the gradebook and apply the curve
        int bumpedGrade = source.getGrade(y) + 20; //this is the grade after the curve is applied
        if (bumpedGrade > 100) { //check if the bumped grade is above 100
            newBook.addGrade(100); //if it is above 100, we add 100 to the new gradebook instead of the bumped grade
        } else {
            newBook.addGrade(bumpedGrade); //if it is not above 100, we add the bumped grade to the new gradebook
        }
    } return newBook;
}