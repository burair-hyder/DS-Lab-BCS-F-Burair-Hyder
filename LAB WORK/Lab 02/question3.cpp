#include <iostream>
using namespace std;

int main(){
    int numStudents, numCourses, mark, i, j;
    float average, sum = 0.0;
    int **scores;

    cout << "Enter number of students: ";
    cin >> numStudents;
    scores = new int*[numStudents];
    int courseCount[numStudents];

    for (i = 0; i < numStudents; i++){
        cout << "Enter number of courses for Student " << i + 1 << ": ";
        cin >> courseCount[i];
        scores[i] = new int[courseCount[i]];
    }

    for (i = 0; i < numStudents; i++){
        for (j = 0; j < courseCount[i]; j++){
            cout << "Enter marks for Student " << i + 1 << " Course " << j + 1 << ": ";
            cin >> mark;
            scores[i][j] = mark;
        }
    }

    for (i = 0; i < numStudents; i++){
        for (j = 0; j < courseCount[i]; j++){
            sum += scores[i][j];
        }
        cout << "Total marks for Student " << i + 1 << ": " << sum << endl;
        average = sum / courseCount[i];
        cout << "Average marks for Student " << i + 1 << ": " << average << endl;
        sum = 0;
    }

    for (i = 0; i < numStudents; i++){
        delete[] scores[i];
    }
    delete[] scores;
}
