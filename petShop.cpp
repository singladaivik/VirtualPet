#include "VirtualPet.h"
#include "Pokemon.h"
#include "Pikachu.h"
#include "Digimon.h"
#include "Gatomon.h"

int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;

	Pikachu pikachu("Sparky", "Electric Mouse", 100, 75);
	pikachu.useElectricShock();

	cout << "Name: " << pikachu.getName() << endl;
	cout << "Species: " << pikachu.getSpecies() << endl;
	cout << "Health: " << pikachu.getHealth() << endl;
	cout << "Electric Power: " << pikachu.getElectricPower() << endl;

	Digimon digimon("Agumon", 80, 60, "Fire");
	digimon.useSpecialAttack();

	cout << "Name: " << digimon.getName() << endl;
	cout << "Element: " << digimon.getElement() << endl;
	cout << "Happiness: " << digimon.getHappiness() << endl;
	cout << "Hunger: " << digimon.getHunger() << endl;

	Gatomon gatomon("Whiskers", "Light", 90, 70, 95);
	gatomon.useCatClawAttack();

	cout << "Name: " << gatomon.getName() << endl;
	cout << "Element: " << gatomon.getElement() << endl;
	cout << "Happiness: " << gatomon.getHappiness() << endl;
	cout << "Hunger: " << gatomon.getHunger() << endl;
	cout << "Cat Claw Sharpness: " << gatomon.getCatClawSharpness() << endl;


	return 0;
}
