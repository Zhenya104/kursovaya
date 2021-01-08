#include "Factory.h"

RuMilitaryEquipmentFactory::RuMilitaryEquipmentFactory(string file)
{
	ITank* rt = &t;
	ITroopCarrier* rtc = &c;
	IRobot* rr = &r;
	IHowitzer* rh = &h;
	IFighter* rf = &f ;
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
	std::ifstream fin(file);
	if (!fin)
	{
		std::cout << "could not open " << file << std::endl;
		std::cin.ignore();
		return;
	}
	for (size_t i = 0; i < amm_of_ME; i++)
	{
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		rt->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
		
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		rtc->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
		
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		rr->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
		
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		rh->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
		
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		rf->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
	}
	fin.close();
}

ITank* RuMilitaryEquipmentFactory::createTank()
{
	RuTank* q = new RuTank(&t);
	return q;
}
ITroopCarrier* RuMilitaryEquipmentFactory::createTroopCarrier()
{
	RuTroopCarrier* q = new RuTroopCarrier(&c);
	return q;
}
IRobot* RuMilitaryEquipmentFactory::createRobot()
{
	RuRobot* q = new RuRobot(&r);
	return q;
}
IHowitzer* RuMilitaryEquipmentFactory::createHowitzer()
{
	RuHowitzer* q = new RuHowitzer(&h);
	return q;
}
IFighter* RuMilitaryEquipmentFactory::createFighter()
{
	RuFighter* q = new RuFighter(&f);
	return q;
}
