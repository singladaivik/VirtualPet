#include "Gatomon.h"

Gatomon::Gatomon(const string& name, const string& element, int happiness, int hunger, 
		int catClawSharpness) : Digimon(name, element, happiness, hunger), 
	        catClawSharpness(catClawSharpness) {}

void Gatomon::useCatClawAttack() {
	cout << "Uses claw attack with sharpness level " << catClawSharpness << endl;
}

int Gatomon::getCatClawSharpness() const {
	return catClawSharpness();
}

