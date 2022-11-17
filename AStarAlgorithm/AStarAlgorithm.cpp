// AStarAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    while (true) {

    srand(time(0));
    int defaultXPos;
    int defaultYPos;

    cout << "X Position: ";
    cin >> defaultXPos;
    cout << "Y Position: ";
    cin >> defaultYPos;
    cout << "(" << defaultXPos << "," << defaultYPos << ")";
    int const gridSize = 100;
    char grid[gridSize][gridSize];

    for (int i = 0; i < gridSize; i++) {

        grid[defaultXPos][defaultYPos] = 'X';

        if (i % 10 == 0) {
            cout << endl;
        }
        grid[i][i] = 'O';
        cout << grid[i][i] << " ";
        
    }
    cout << endl;      
    }
}

