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
	bool feldBesetzt(int y1, int y2);
	void zugAusfuehren(int x1, int x2, int y1, int y2, char figur);
	char welcheFigurSteht(int x1, int x2);


	//Funktionen was die verschiedenen Figuren dürfen 
	int ZugBauer(int x1, int y1, int x2, int y2, char figur); 
	
};