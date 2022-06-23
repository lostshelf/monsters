#include <iostream>

#include "Creature.h"

int main()
{
	Creature o {
		"Orc",
		'o',
		4,
		2,
		10,
	};

	o.addgold(5);
	o.reducehealth();

	std::cout << "The "
			  << o.get_name()
		      << " has "
		      << o.get_health()
		      << " health and is carrying "
		      << o.get_gold()
		      << " gold.\n";

	return 0;
}