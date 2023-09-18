#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"

class Pikachu : public Pokemon {
	private:
		int electricPower;

	public:
		Pikachu(const string& name, const string& species, int health, int electricPower);
		void useElectricshock();
		int getElectricPower() const;

};

#endif
