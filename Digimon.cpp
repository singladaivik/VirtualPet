#include "Digimon.h"

Digimon::Digimon(const string& name, int happiness, int hunger, const string& element) 
	:VirtualPet(name, happiness, hunger), element(element) {}

void Digimon::useSpecialAttack() {
	cout << "Uses special attack of element " << element << endl;
}

string Digimon::getElement() const {
	return element;
}

