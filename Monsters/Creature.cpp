#include "Creature.h"

Creature::Creature(std::string name, char symbol, int health, int damage, int gold)
	: m_name   { name   }
	, m_symbol { symbol }
	, m_health { health }
	, m_damage { damage }
	, m_gold   { gold   }
{
}


void Creature::reducehealth (int amount) { this->m_health -= amount;     }
void Creature::addgold      (int amount) { this->m_gold += amount;       }
bool Creature::isdead       (          ) { return (this->m_health <= 0); }