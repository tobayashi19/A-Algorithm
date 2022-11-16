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

    srand(time(0));
    
    int defaultXPos;
    int defaultYPos;
    char node[100][100];
    cout << "X Position: ";
    cin >> defaultXPos;
    cout << "Y Position: ";
    cin >> defaultYPos;
    int const gridSize = 100;
    char grid[gridSize][gridSize];

    //creates grid for algorithm 
    for (int i = 0; i < gridSize; i++) {
        if (i % 10 == 0) {
            cout << endl;
        }  
        
        
        grid[i][i] = 'X';  
        grid[defaultXPos][defaultYPos] = 'O';
        cout << grid[i][i] << " ";
        
    }

 
}

