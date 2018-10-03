#include <stdio.h>

#ifndef CLASSES_H
#define CLASSES_H
#endif

class Team {
public:
	Team (int tRat, int Sta);
	int getTotal_Rating(); 
	void Fatigue();

private:
	int Total_Rating;
	double Stamina;
};

class Player {
public:
	Player (int Rat, int Sta);
	int getPlayer_Rating();
	void Fatigue();
private:
	int Player_Rating;
	double Stamina;
};
