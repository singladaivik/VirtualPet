#include "Digimon.h"

Digimon::Digimon(const string& name, int happiness, int hunger, const string& element) 
	:VirtualPet(name), element(element) {
		happiness = happiness;
		hunger = hunger;
}

void Digimon::useSpecialAttack() {
	cout << "Uses special attack of element " << element << endl;
}

string Digimon::getElement() const {
	return element;
}

