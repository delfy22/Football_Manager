#include <stdio.h>
#include "Classes.h"

Team::Team(int tRat, int Sta) 
		: Total_Rating(tRat), Stamina( (double)Sta/100.0 ) {}
int Team::getTotal_Rating () {
	return Total_Rating;
}
void Team::Fatigue () {
	Total_Rating = Total_Rating * Stamina;
}


Player::Player(int Rat, int Sta) 
		: Player_Rating(Rat), Stamina( (double)Sta/100.0 ) {}
int Player::getPlayer_Rating() {
	return Player_Rating;
}
void Player::Fatigue() {
	Player_Rating = Player_Rating * Stamina;
} 
