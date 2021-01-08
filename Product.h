#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class ITank;
class ITroopCarrier;
class IRobot;
class IHowitzer;
class IFighter;

class ITank
{
private:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
public:
	virtual string get_data_to_print() = 0;
	virtual ~ITank() {};
};
class ITroopCarrier
{
private:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
public:
	virtual ~ITroopCarrier() {};
	virtual string get_data_to_print() = 0;
};
class IRobot
{
private:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
public:
	virtual ~IRobot() {};
	virtual string get_data_to_print() = 0;
};
class IHowitzer
{
private:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
public:
	virtual ~IHowitzer() {};
	virtual string get_data_to_print() = 0;
};
class IFighter
{
private:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
public:
	virtual string get_data_to_print() = 0;
	virtual ~IFighter() {};
};

class RuTank : public ITank
{
private:
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(ITank*);
	RuTank() {};
	string get_data_to_print() override;
};
class RuTroopCarrier : public ITroopCarrier
{
private:
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(ITroopCarrier*);
	RuTroopCarrier() {};
	string get_data_to_print() override;
};
class RuRobot : public IRobot
{
private:
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(IRobot*);
	RuRobot() {};
	string get_data_to_print() override;
};
class RuHowitzer : public IHowitzer
{
private:
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(IHowitzer*);
	RuHowitzer() {};
	string get_data_to_print() override;
};
class RuFighter : public IFighter
{
private:
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(IFighter*);
	RuFighter() {};
	string get_data_to_print() override;
};
