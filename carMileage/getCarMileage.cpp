#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

string *strArray;
int *finalMileages;
float *averageMileage;
int **mileageMatrix;

void toStringArray(string data, int size)
{
    int ptr = 0;
    strArray = new string[size];
    string newData = "";

    for (int index = 0; index < data.length(); index++)
    {
        if (data.at(index) == ':')
        {
            strArray[ptr] = newData;
            newData = "";
            ptr++;
        }
        else
        {
            newData += data.at(index);
        }
    }
}

void getMileage(int times)
{
    for (int index = 0; index < times; index++)
    {
        int sum = 0;
        for (int ptr = 0; ptr < finalMileages[index]; ptr++)
        {
            sum += mileageMatrix[index][ptr];
        }
        averageMileage[index] = (float)sum / (float)finalMileages[index];
    }
}

void fillMatrix(int times)
{
    bool first = false;
    string number;
    int ptr = 0;

    for (int index = 0; index < times; index++, first = false, ptr = 0)
    {
        istringstream numbers(strArray[index]);

        while (numbers >> number)
        {
            if (first == false)
            {
                finalMileages[index] = stoi(number);
                first = true;
                mileageMatrix[index] = new int[finalMileages[index]];
            }
            else
            {
                mileageMatrix[index][ptr] = stoi(number);
                ptr++;
            }
        }
    }
}

void printMileage(int times)
{
    for (int index = 0; index < times; index++)
    {
        cout << "Average of car #" << index + 1 << ":" << averageMileage[index] << endl;
    }
}

int main()
{
    string fileName, line, data = "";
    int lines = 0;
    // int **array;

    cout << "Enter The File Name : ";
    cin >> fileName;

    if (fileName.length() == 0)
    {
        fileName = "input1.txt";
    }

    ifstream openFile("input1.txt");

    while (getline(openFile, line))
    {
        if (line.length() == 0)
        {
            continue;
        }
        data += line + " : ";
        lines++;
    }

    finalMileages = new int[lines];
    averageMileage = new float[lines];
    *mileageMatrix = new int[lines];

    cout << data << lines << endl;

    toStringArray(data, lines);
    fillMatrix(lines);
    getMileage(lines);
    printMileage(lines);

    for (int index = 0; index < lines; index++)
    {
        cout << strArray[index] << endl;
    }

    openFile.close();
    delete[] strArray, finalMileages, mileageMatrix, averageMileage;
    // delete[] mileageMatrix;
    // delete[] finalMileages;

    return 0;
}