#ifndef GATOMON_H
#define GATOMON_H

#include "Digimon.h"

class Gatomon : public Digimon {
	private: 
		int catClawSharpness;

	public:
		Gatomon(const string& name, const string& element, int happiness, int hunger,
		        int catClawSharpness);
		void useCatClawAttack();
		int getCatClawSharpness() const;
};


#endif
