#include <iostream>
#include <cstring>
#include "MelkayaBitovayaTehnika.h"

// ������������
MelkayaBitovayaTehnika::MelkayaBitovayaTehnika()
{
}
MelkayaBitovayaTehnika::MelkayaBitovayaTehnika(std::string brend, std::string color) : brend_(brend), color_(color)
{
}

std::string MelkayaBitovayaTehnika::ShowBrend(){ return brend_; }
void MelkayaBitovayaTehnika::setBrend(std::string newbrend) { brend_ = newbrend; }
std::string MelkayaBitovayaTehnika::getColor(){	return color_; }

void MelkayaBitovayaTehnika::setColor(std::string newcolor) { color_ = newcolor; }


// ������������
VacuumCleaner::VacuumCleaner()
{
}
VacuumCleaner::VacuumCleaner(int power, double dustcontainervolume) : power_(power), dustcontainervolume_(dustcontainervolume)
{
}
VacuumCleaner::VacuumCleaner(std::string brend, std::string color, int power, double dustcontainervolume) : MelkayaBitovayaTehnika(brend,color), power_(power), dustcontainervolume_(dustcontainervolume)
{
}

int VacuumCleaner::getPower() { return power_; };
void VacuumCleaner::setPower(int newpower){	power_ = newpower; }

double VacuumCleaner::getDustcontainervolume(){	return dustcontainervolume_; }
void VacuumCleaner::setDustcontainervolume(double newdustcontainervolume){ dustcontainervolume_ = newdustcontainervolume; }

void VacuumCleaner::Show()
{
	std::cout << "�����: " << brend_ << "\n"
		<< "����: " << color_ << "\n"
		<< "��������: " << power_ << "\n"
		<< "����� ����������: " << dustcontainervolume_ << std::endl;
}


// ������������
Microwave::Microwave()
{
}
Microwave::Microwave(int volume, int power) : volume_(volume), power_(power)
{
}
Microwave::Microwave(std::string brend, std::string color, int volume, int power) : MelkayaBitovayaTehnika(brend, color), volume_(volume), power_(power)
{
}

int Microwave::getVolume(){	return volume_; }
void Microwave::setVolume(int newvolume){ volume_ = newvolume; }
int Microwave::getPower(){ return power_; }
void Microwave::setPower(int newpower){	power_ = newpower; }

void Microwave::Show()
{
	std::cout << "�����: " << brend_ << "\n"
			  << "����: " << color_ << "\n"
			  << "�����: " << volume_ << "\n"
			  << "��������: " << power_ << std::endl;
}


// ������������
Teapot::Teapot()
{
}
Teapot::Teapot(int volume) : volume_(volume)
{
}
Teapot::Teapot(std::string brend, std::string color, int volume) : MelkayaBitovayaTehnika(brend, color), volume_(volume)
{
}

int Teapot::getVolume(){ return volume_;}
void Teapot::setVolume(int newvolume){ volume_ = newvolume; }

void Teapot::Show()
{
	std::cout << "�����: " << brend_ << "\n"
			  << "����: " << color_ << "\n"
			  << "�����: " << volume_ << std::endl;
}
