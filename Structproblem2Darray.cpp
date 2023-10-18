#include <iostream>
using namespace std;
struct student
{
    char name[50];
    char id[15];
    int age;
    float cgpa;
};

void arrayvariable2d()
{
    int row = 2, col = 4; // for 2x4 2D structure Array 
    student s[row][col];
    float maxCgpa = 0; // Initialize the maximum CGPA 
    student topStudent;   // Store the details of the student with the highest CGPA

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the details of Student " << i * col + j + 1 << ":" << endl;
            cout << "Name: ";
            cin.getline(s[i][j].name, sizeof(s[i][j].name));
            cout << "ID: ";
            cin.getline(s[i][j].id, sizeof(s[i][j].id));
            cout << "Age: ";
            cin >> s[i][j].age;
            cout << "CGPA: ";
            cin >> s[i][j].cgpa;
            cin.ignore(); // Consume the newline character

            if (s[i][j].cgpa > maxCgpa)
            {
                maxCgpa = s[i][j].cgpa; // Update the maximum CGPA
                topStudent = s[i][j];   // Store the details of the student with the highest CGPA
            }
        }
    }

    cout << endl
         << "Details of the student with the highest CGPA:" << endl;
    cout << "Name: " << topStudent.name << endl;
    cout << "ID  : " << topStudent.id << endl;
    //cout << "Age: " << topStudent.age << endl; exlude age from the output
    cout << "CGPA: " << topStudent.cgpa << endl;
}

int main()
{
    cout << "### For 2D array variable ###Captain" << endl;
    arrayvariable2d(); //call the function
    return 0;
}
