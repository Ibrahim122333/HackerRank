#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // 2d vector which store all data in row and col
    vector<vector<int>> data;
    // vector which stores user wish
    int dataUserWant[2];

    int noOfArray, noOfQuries, noOfDataInVector, tmp;

    // taking input from user
    // noOfArray = no of array user wants to input
    // noOfQuries = no of Quries user wants
    scanf("%d %d", &noOfArray, &noOfQuries);

    // this loop is for row
    for (int i = 0; i < noOfArray; i++)
    {
        // this vector is store row data temprory
        vector<int> rowData;
        // take input from user that how much data user stores
        cin >> noOfDataInVector;
        // this loop is for col
        for (int j = 0; j < noOfDataInVector; j++)
        {
            cin >> tmp;
            // push data on tmp vector
            rowData.push_back(tmp);
            // clear tmp variable
            tmp = 0;
        }
        // push all row data into data vector
        data.push_back(rowData);
        // clear tmp row vector
        rowData.clear();
    }
    for (int i = 0; i < noOfQuries; i++)
    {
        scanf("%d %d", &dataUserWant[0], &dataUserWant[1]);
        cout<<data[dataUserWant[0]][dataUserWant[1]]<<"\n";
    }

    return 0;
}