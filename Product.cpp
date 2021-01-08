#include "Product.h"

RuTank::Initialize(ITank* T)
{
	this->power = T->power;
	this->range = T->range;
	this->combat_weight = T->combat_weight;
	this->caliber = T->caliber;
	this->crew = T->crew;
	this->year = T->year;
	this->amount = T->amount;
	this->type_of_weapon = T->type_of_weapon;
	this->movement = T->movement;
}
RuTank::Initialize(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	power = _power;
	range = _range;
	combat_weight = _combat_weight;
	caliber = _caliber;
	crew = _crew;
	year = _year;
	amount = _amount;
	type_of_weapon = _type_of_weapon;
	movement = _movement;
}
string RuTank::get_data_to_print()
{
	string data;
	data += "\nБоевой танк - Россия";
	
	data += "\n\tмощность: ";
	data += to_string(power);
	data += "\n\tдальность: ";
	data += to_string(range);
	data += "\n\tтип оружия: ";
	data += type_of_weapon;
	data += "\n\tкалибр: ";
	data += to_string(caliber);
	data += "\n\tметод передвижения: ";
	data += movement;
	data += "\n\tгод создания: ";
	data += to_string(year);
	data += "\n\tколичество: ";
	data += to_string(amount);
	data += "\n\tбоевая масса: ";
	data += to_string(combat_weight);
	data += "\n\tэкипаж: ";
	data += to_string(crew);

	return data;
}

RuTroopCarrier::Initialize(ITroopCarrier* T)
{
	this->power = T->power;
