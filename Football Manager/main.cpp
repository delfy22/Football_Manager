#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Classes.h"

//class Team {
//public:
//	Team (int tRat) : Total_Rating (tRat) {} //construct using Total_Rating = d

//	int getTotal_Rating() {
//		return (Total_Rating); //return the total rating to be used
//	}

//private:
//	int Total_Rating; //sum ratings of the whole team
//};

double getRandNo () {
	return (rand() % 4000)/10000.0 + 0.8;
}


int main () {

	srand (time(NULL));

	Team ManU(913, 95);
	Team Chel(923, 93);

	int MURating = ManU.getTotal_Rating();
	int CHRating = Chel.getTotal_Rating();

	int MUGoals = 0;
	int CHGoals = 0;
	
	double randomMultiplierMU = 0;
	double randomMultiplierCH = 0;

	for (int i=1; i<10; i++) {

		ManU.Fatigue();
		Chel.Fatigue();

		MURating = ManU.getTotal_Rating();
		CHRating = Chel.getTotal_Rating();

		std::cout << "MU Score  = " << ManU.getTotal_Rating() << std::endl; 

		std::cout << "CH Score  = " << Chel.getTotal_Rating() << std::endl; 
		std::cout << "Minute: " << i*10 << std::endl;

		randomMultiplierMU = getRandNo();
		randomMultiplierCH = getRandNo();

		double RatingDiff = MURating*randomMultiplierMU
				     - CHRating*randomMultiplierCH;

		std::cout << "MU rand score = " << MURating*randomMultiplierMU << std::endl;

		std::cout << "CH rand score = " << CHRating*randomMultiplierCH << std::endl;
		if (RatingDiff > 1) {
			std::cout << "Goal to ManU" << std::endl;
			MUGoals++;
		}
		else if (RatingDiff < -1)  {
			std::cout << "Goal to Chelsea" << std::endl;
			CHGoals++;
		}
		else {
			std::cout << "No goal" << std::endl;
		}
	}

	std::cout << "Final score is: " << MUGoals << ":" <<
					CHGoals << " to ManU" << std::endl;

	return 0;
}


