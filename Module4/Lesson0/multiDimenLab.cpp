#include <iostream>

using namespace std;

int main(void) {
    int numClasses = 0; 
    float totalGradeSum = 0.0;

    cin >> numClasses;

    //create pointer outer array (for rows)
    int **grades = new int*[numClasses];
    float *classAvg = new float[numClasses];

    //set grades[i] as the pointer for the i-th class
    for (int i =0; i < numClasses; i++) {
        int n = 0;
        cin >> n;

        grades[i] = new int[n+1];
        grades[i][0] = n;
        long gradeSum = 0;

        // sum grades
        for (int j=1; j <= n; j++) {
            int grade = 0;
            cin >> grade;
            gradeSum += grade;
            grades[i][j+1] = grade;
        }

        classAvg[i] = float(gradeSum/n);
        totalGradeSum += classAvg[i];
    }

    //print results (from solutions)
    for (int i = 0; i < numClasses; i++)
    {
      cout << "Course " << i+1 << ": final "  << classAvg[i] << ", grades:";
      for (int j = 1; j <= grades[i][0]; j++)
      {
        cout << ' ' << grades[i][j];
      }
      cout << endl;
    }

    float overallAvg = totalGradeSum / numClasses;
    cout << "Overall average: " << overallAvg << endl;

    //free the memory
    for (int i = 0; i < numClasses; i++)
    {
      delete[] grades[i];
    }

    delete[] grades;

    return 0;
}