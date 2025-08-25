#include <iostream>
using namespace std;

int main()
{
    double MathGrade, ChemGrade, PhysGrade, AveGrade;

    cout << "Enter grade for math on a scale of 1 to 100:" << endl;
    cin >> MathGrade;
    
    cout << "Enter grade for chemistry on a scale of 1 to 100:" << endl;
    cin >> ChemGrade;

    cout << "Enter grade for physics on a scale of 1 to 100:" << endl;
    cin >> PhysGrade;

    AveGrade = (MathGrade + ChemGrade + PhysGrade)/3;

    cout << "The average grade is " << AveGrade << " out of 100." <<endl;

    cout << "The average grade is ";

/* Grades are calculated as follows:
o A:Finalpercentage≥90
o B:80≤Finalpercentage<90
o C:70≤Finalpercentage<80
o D:60≤Finalpercentage<70
o F:Finalpercentage<60orifthestudenthasfailedasubject. 
*/



    if (AveGrade >= 90) {
        cout << "an A." << endl;
    }

    else if (AveGrade >= 80) {
        cout << "a B." << endl;
    }

    else if (AveGrade >= 70) {
        cout << "a C." << endl;
    }

    else if (AveGrade >= 60) {
        cout << "a B." << endl;
    }

    else {
        cout << "an F." << endl;
    }

    return 0;
}