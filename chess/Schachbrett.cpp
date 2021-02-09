#include <vector>
#include <iostream>
#include <string>
#include "Schachbrett.h"
//Konstruktor, Figuren werden initial aufgestellt
using namespace std;

Schachbrett::Schachbrett() {

    //Beschriftung Schabrett schach[Zeile][Spalte]
    // nicht nötig
    // die bezeichnung der Felder sollte man extern speichern
    schach[0][0] = ' ';
    schach[1][0] = '1';
    schach[2][0] = '2';
    schach[3][0] = '3';
    schach[4][0] = '4';
    schach[5][0] = '5';
    schach[6][0] = '6';
    schach[7][0] = '7';
    schach[8][0] = '8';
    schach[0][1] = 'A';
    schach[0][2] = 'B';
    schach[0][3] = 'C';
    schach[0][4] = 'D';
    schach[0][5] = 'E';
    schach[0][6] = 'F';
    schach[0][7] = 'G';
    schach[0][8] = 'H';
    //weisse Figuren
    schach[1][1] = 'T';
    schach[1][2] = 'S';
    schach[1][3] = 'L';
    schach[1][4] = 'D';
    schach[1][5] = 'K';
    schach[1][6] = 'L';
    schach[1][7] = 'S';
    schach[1][8] = 'T';
    for (int i = 1; i < 9; i++) {
        schach[2][i] = 'B';
    }

    //schwarze Figuren
    schach[8][1] = 't';
    schach[8][2] = 's';
    schach[8][3] = 'l';
    schach[8][4] = 'd';
    schach[8][5] = 'k';
    schach[8][6] = 'l';
    schach[8][7] = 's';
    schach[8][8] = 't';
    for (int i = 1; i < 9; i++) {
        schach[7][i] = 'b';
    }

    //restliche Felder leer initialisieren
    for (int spalte = 3; spalte < 7; spalte++) {
        for (int zeile = 1; zeile < 9; zeile++) {
            schach[spalte][zeile] = '0';
        }
    }
}

Schachbrett::~Schachbrett() {}

//Ausgabe des Feldes
void Schachbrett::printField() {
    cout << endl << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << schach[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
}



int main() {
    Schachbrett spiel;
    spiel.printField();
    


    return 0;
}