#pragma once

#include <iostream>
#include <cstring>
#include "IElectonics.h"


// Мелкая бытовая техника (string brend_,string color_)
class MelkayaBitovayaTehnika : public IElectronics 
{
public:
	MelkayaBitovayaTehnika();
	MelkayaBitovayaTehnika(std::string brend, std::string color);

	std::string ShowBrend() override;
	void setBrend(std::string newbrend);
	
	std::string getColor();
	void setColor(std::string newcolor);

protected:
	std::string brend_;		// бренд
	std::string color_;		// цвет
};

// Пылесос (int power_, double dustcontainervolume_)
class VacuumCleaner final: public MelkayaBitovayaTehnika 
{
public:
	VacuumCleaner();
	VacuumCleaner(int power, double dustcontainervolume);
	VacuumCleaner(std::string brend, std::string color, int power, double dustcontainervolume);

	int getPower();
	void setPower(int newpower);

	double getDustcontainervolume();
	void setDustcontainervolume(double newdustcontainervolume);

	void Show() override;

protected:
	int power_;						// мощность
	double dustcontainervolume_;	// объем пылесборника
};

// Микроволновая печь(int volume_, int power_)
class Microwave final: public MelkayaBitovayaTehnika 
{
public:
	Microwave();
	Microwave(int volume, int power);
	Microwave(std::string brend, std::string color, int volume, int power);

	int getVolume();
	void setVolume(int newvolume);

	int getPower();
	void setPower(int newpower);

	void Show() override;

protected:
	int volume_{ 0 };			    	 // вместимость в литрах
	int power_{ 0 };					 // мощность
};

// Чайник(int volume)
class Teapot final : public MelkayaBitovayaTehnika 
{
public:
	Teapot();
	Teapot(int volume);
	Teapot(std::string brend, std::string color, int volume);

	int getVolume();
	void setVolume(int newvolume);

	void Show() override;


protected:
	int volume_;				// объем
};