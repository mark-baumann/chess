#pragma once

class Schachbrett {

private:
	char schach[9][9];

	//Konstruktor, Figuren werden initial aufgestellt
public:
	Schachbrett();
	// standard Destruktor
	~Schachbrett();
	void printField();
	char welcheFigur(int x1, int x2);
	bool feldFrei(int y1, int y2);
	bool richtigeFigur(char figur, int spieler);
	void zug(int x1, int x2, int y1, int y2, char figur);
	int zugTurm(int x1, int x2, int y1, int y2, char figur);
	int zugLaeufer(int x1, int x2, int y1, int y2, char figur);
	// examplarisch verbesserte Zugmethode
	bool zugKoenig(int x1, int x2, int y1, int y2);
	int zugBauerB(int x1, int x2, int y1, int y2, char figur);
	int zugBauerb(int x1, int x2, int y1, int y2, char figur);
	int zugSpringer(int x1, int x2, int y1, int y2, char figur);
};