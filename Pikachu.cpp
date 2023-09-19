#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int health, int electricPower)
	:Pokemon(name, species), electricPower(electricPower) {
		health = health;
}

void Pikachu::useElectricShock() {
	cout << "Uses Electric Shock with power level " << electricPower << endl;
}

int Pikachu::getElectricPower() const {
	return electricPower;

}
