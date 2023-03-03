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
    int scorE[5];
    int total_scorE;
    void readInputs(void);
    int setReadInputs();
    int calculateTotalScore(int score[5]);
};
void Student::readInputs()
{
    std::cout << "Enter Scores : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> scorE[i];
    }
}
int Student::setReadInputs()
{
    for (int i = 0; i < 5; i++)
    {
        score[i] = scorE[i];
    }
}
int Student::calculateTotalScore(int score[5])
{
    int tmp = 0;
    for (int i = 0; i < 5; i++)
    {
        tmp = tmp + score[i];
    }
    return tmp;
}

int main()
{
    int number_of_students;
    std::cout << "Enter Number Of Students : ";
    cin >> number_of_students;

    Student stud[number_of_students];
    int scorE[5];
    for (int i = 0; i < number_of_students; i++)
    {
        stud[i].readInputs();
        int scorE[5]=stud[i].setReadInputs()
    }

    return 0;
}
