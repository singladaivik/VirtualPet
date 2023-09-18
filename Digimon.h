#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet {
	private:
		string element;

	public:
		Digimon(const string& name, int happiness, int hunger, const string& element);
		void useSpecialAttack();
		string getElement() const;
};

#endif
