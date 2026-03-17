
#ifndef ASSIGNMENT2_GRADEANALYZER_H
#define ASSIGNMENT2_GRADEANALYZER_H
#include "GradeBook.h"
using namespace std;

//GradeAnalyzer inherits ALL data and ALL methods from GradeBook but can add new methods
class GradeAnalyzer : public GradeBook {
public:
    GradeBook applyCurve(const GradeBook& source); //curve method that will take in a gradebook and return a new gradebook with the curve applied to it
    GradeBook applyCapCurve(const GradeBook& source); //same as above but applies the cap curve. cap curve means no more than 100
};

#endif //ASSIGNMENT2_GRADEANALYZER_H