#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student
{
private:
    int score[5];
    int total_score;

public:
    void readInputs();
    int calculateTotalScore();
    int kristenGrade(int K_grades, int others_grade);
};
void Student::readInputs()
{
    std::cout << "Enter Scores : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> score[i];
    }
}

int Student::calculateTotalScore()
{
    int tmp = 0;
    for (int i = 0; i < 5; i++)
    {
        tmp = tmp + score[i];
    }
    return tmp;
}
int Student::kristenGrade(int K_grades, int others_grades)
{
    if (K_grades < others_grades)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number_of_students, count = 0;
    std::cout << "Enter Number Of Students : ";
    cin >> number_of_students;

    Student stud[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        stud[i].readInputs();
    }
    for (int i = 0; i < number_of_students; i++)
    {

        stud[i].calculateTotalScore();
    }
    for (int i = 0; i < number_of_students; i++)
    {
        count = count + stud[i].kristenGrade(stud[0].calculateTotalScore(), stud[i].calculateTotalScore());
    }

    cout << "result : " << count << "\n";

    return 0;
}
