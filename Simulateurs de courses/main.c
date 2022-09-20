#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


struct Race {
	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[20];
	char firstPlaceRaceCarColor[10];
};

struct RaceCar {
	char driveName[20];
	char raceCarColor[20];
	int totalLapTime;
};

void printIntro(){
	printf("Bienvenue a notre evenement principal, les fans de course numerique !\nJ'espere que tout le monde a pris son gouter car nous allons commencer !");
};

void printCountDown(){
	int i;
	for(i = 6; i>= 1; i--){
		printf("%d\n", i);
//		sleep(1);
	}
	printf("Course !");
};

void printFirstPlaceAfterLap(struct Race race){
	printf("Apres le tour numero %d. \nLa premiere place est occupee par : %d. \ndans la voiture de course %s! \n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

void printCongratulations(struct Race race){
	printf("Felicitons tous %s, dans la voiture de corse %s, pour incroyable performance. \n\t C'etait vraiment une belle course et bonne nuit a tours !\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
	
};

int calculateTimeToCompleteLap(){
	srand(time(0));
	int sum;
	// to get value between two numbers we use (rand() % (max - min + 1) + min)
	int vitesse = (rand()%(3-1+1)+1);
	int accelaration = (rand()%(3-1+1)+1);
	int nerves = (rand()%(3-1+1)+1);
	sum = vitesse + accelaration + nerves;
};

void UpdateRaceCar(struct RaceCare *raceCare){
	raceCar->totalLapTime+=calculateTimeToCompleteLap();
};

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar){
	if(raceCar1->totalLapTime <= raceCar2->)
	
};


int main() {
	
	calculateTimeToCompleteLap();

	return 0;
}
