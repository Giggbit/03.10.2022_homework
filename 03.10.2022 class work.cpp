#include <iostream>
#include "Animal.h"
#include "Elephant.h"
#include "Pinguin.h"
#include "Parrot.h"
#include "Dog.h"
using namespace std;


int main() {
	Elephant elephant("elephant", "type", "hot and tropical climates", "big", "thick skin");
	elephant.PrintAnimal();

	Pinguin pinguin("pinguin", "type", "cold edges", "average", "warm wool");
	pinguin.PrintAnimal();

	Parrot parrot("parrot", "type", "warmer climes", "small", "can fly");
	parrot.PrintAnimal();



}
