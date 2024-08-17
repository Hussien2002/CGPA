#include <iostream>
#include <string>
using namespace std;
void calculateCGPA();
int n, totalPoint = 0, totalHour = 0, m;
struct cgpa {
    int point = 0;
    string name;
    int hour = 0;
};

int main() {

    calculateCGPA();


    return 0;
}
void calculateCGPA()
{
    cout << "Please enter the number of semesters: ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "Please enter the number of subjects: ";
        cin >> n;

        cgpa* stu = new cgpa[n];

        for (int j = 0; j < n; j++) {
            cout << "Enter name and point of subject [" << (j + 1) << "]: ";
            cin >> stu[j].name >> stu[j].point;
        }

        for (int j = 0; j < n; j++) {
            cout << "Enter hours of subject [" << (j + 1) << "]: ";
            cin >> stu[j].hour;
            totalPoint += (stu[j].hour * stu[j].point);
            totalHour += stu[j].hour;
        }
        
        for (int j = 0; j < n; j++) {
            cout << "Subject " << (1 + j) << ": " << stu[j].name << " (" << stu[j].point << " points, " << stu[j].hour << " hours)\n";
        }

        // Clean up the dynamically allocated memory
        delete[] stu;
    }

    cout << "Total points: " << totalPoint << "\n";
    cout << "Total hours: " << totalHour << "\n";
    float gpa = static_cast<float>(totalPoint) / static_cast<float>(totalHour);
    cout << "****************************************************\n";
    cout << "GPA: " << gpa << "\n";

}