#include <stdio.h>
#include <iostream>

class Player {
    public:
         Player(double sta,double rat):
             stamina(sta), rating(rat){}

         double getPlayer(){
                return rating;
                }
        void fatigue(){
        rating = (stamina/100) * rating;
	}

    private: double stamina, rating;
};

int main(void){
    Player deGea(95,88);
    deGea.fatigue();
    deGea.fatigue();

    std::cout << "De Gea's rating is "<< deGea.getPlayer() << std::endl;

    return 0;
}
