#pragma once

#include <string>

class Creature
{
private:
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_damage;
	int m_gold;
public:
	Creature(std::string name, char symbol, int health, int damage, int gold);

	const std::string& get_name   () const { return m_name;   }
	const char&        get_symbol () const { return m_symbol; }
	const int&         get_health () const { return m_health; }
	const int&         get_damage () const { return m_damage; }
	const int&         get_gold   () const { return m_gold;   }

	void reducehealth(int amount = 1);
	void addgold(int amount = 1);
	bool isdead();
};