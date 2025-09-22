// P2025_09_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>  //CPP 표준
#include <conio.h>   //C 표준


using namespace std;



int World[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

};



bool bIsRunning  = true;
int PlayerX      = 1;
int PlayerY      = 1;
char PlayerShape = 'P';

//사상(Mapping
char Sprites[2] = { ' ', '*' }; //그림으로 바꾸자


void Input() {

    char KeyCode = _getch();

    switch (KeyCode)
    {
    case 'w':
        PlayerX--;
        break;

    case 'a':
        PlayerY--;
        break;

    case 's':
        PlayerX++;
        break;

    case 'd':
        PlayerY++;
        break;

    case 'q':
        bIsRunning = false;
        break;

    default:
        break;
    }
}


void rander() {
    system("cls");

    for (int y = 0; y < 10; y++) {
        for (int i = 0; i < 10; i++) {
            int ivalue = World[y][i];

            if (PlayerX == y && PlayerY == i) {
                cout << "★";
            }
            else {
                cout << Sprites[ivalue];
            }

        }
        cout << endl;
    }
}


int main_test() {
      
    rander();
    //process
    while (bIsRunning) {
        Input();
        rander();
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
