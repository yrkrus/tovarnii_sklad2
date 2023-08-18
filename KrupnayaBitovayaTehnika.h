#pragma once

#include <iostream>
#include <cstring>
#include "IElectonics.h"


// ������� ������� ������� (string brend_, int weight_, int height_)

class KrupnayaBitovayaTehnika : public IElectronics
{
public:
	// ������������	
	KrupnayaBitovayaTehnika();
	KrupnayaBitovayaTehnika(std::string brend);
	KrupnayaBitovayaTehnika(int weight, int height);
	KrupnayaBitovayaTehnika(std::string brend, int weight, int height);	
	
	
	std::string ShowBrend() override;
	void setBrend(std::string newbrend);

	void setWeight(int newweight);
	int getWeight();

	void setHeight(int newheight);
	int getHeight();

	
protected:
	std::string brend_;			// ����� �������
	int weight_{ 0 };			// ������
	int height_{ 0 };			// ������
};

// �����������(string color_, string energyclass_)
class Holodilnik final: public KrupnayaBitovayaTehnika 
{
public:
	// ������������
	Holodilnik();
	Holodilnik(std::string color, std::string energyclass);
	Holodilnik(std::string brend, int weight, int height, std::string color, std::string energyclass);
		

	std::string getColor();
	void setColor(std::string newcolor);

	std::string getEnergyclass();
	void setEnergyclass(std::string newenergyclass);

	void Show() override;

protected:
	std::string color_;				// ����
	std::string energyclass_;		// ����� �����������������
};

// ���������� ������(int depth_)
class WashingMachine final: public KrupnayaBitovayaTehnika
{
public:
	// ������������
	WashingMachine();
	WashingMachine(int depth);
	WashingMachine(std::string brend, int weight, int height, int depth);

	int getDepth();
	void setDepth(int newdepth);

	void Show() override;

protected:
	int depth_;				// �������

};

class GasStove final: public KrupnayaBitovayaTehnika 
{
public:
	
	// ������������
	GasStove();
	GasStove(std::string color, int burner);
	GasStove(std::string brend, int weight, int height, std::string color, int burner);

	void setBurner(int newburner);
	int getBurner();
	
	void setColor(std::string newcolor);
	std::string getColor();

	void Show() override;


protected:
	std::string color_;		    // ����
	int burner_{ 0 };			// ���-�� ��������
};