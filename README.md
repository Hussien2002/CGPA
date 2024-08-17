# CGPA Calculator

## Overview

The CGPA Calculator is a C++ program that allows users to input their grades and calculate their Cumulative Grade Point Average (CGPA). The program is designed to be simple and efficient, making it easy for users to calculate their CGPA based on their grades.

## Features

- **Grade Input:** Users can enter their grades for multiple subjects.
- **CGPA Calculation:** The program accurately calculates the CGPA based on the grades entered.

## Technology Stack

- **Programming Language:** C++

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Hussien2002/CGPA.git
   ```
2. Navigate to the project directory:
   ```bash
   cd CGPA
   ```
3. Compile the C++ code:
   ```bash
   g++ -o cgpa_calculator main.cpp
   ```
4. Run the program:
   ```bash
   ./cgpa_calculator
   ```

## Usage

- Launch the program.
- Enter your grades when prompted.
- The program will calculate and display your CGPA.

## Future Enhancements

- Adding support for different grading systems.
- Extending the program to calculate Semester GPA (SGPA).

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.



## Contact

For any questions or feedback, please reach out to [hussiene188@gmail.com](mailto:your-email@example.com).
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
