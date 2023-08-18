#include <iostream>
#include <cstring>
#include "KrupnayaBitovayaTehnika.h"


// конструкторы
KrupnayaBitovayaTehnika::KrupnayaBitovayaTehnika() 
{
}
KrupnayaBitovayaTehnika::KrupnayaBitovayaTehnika(std::string brend) : brend_(brend) 
{
}
KrupnayaBitovayaTehnika::KrupnayaBitovayaTehnika(int weight, int height) : weight_(weight), height_(height) 
{
}
KrupnayaBitovayaTehnika::KrupnayaBitovayaTehnika(std::string brend, int weight, int height) : brend_(brend),weight_(weight), height_(height) 
{
}

std::string KrupnayaBitovayaTehnika::ShowBrend() { return brend_; }

void KrupnayaBitovayaTehnika::setBrend(std::string newbrend) { brend_ = newbrend; }

void KrupnayaBitovayaTehnika::setWeight(int newweight) { weight_ = newweight; }

int KrupnayaBitovayaTehnika::getWeight() { return weight_; }

void KrupnayaBitovayaTehnika::setHeight(int newheight) { height_ = newheight; }

int KrupnayaBitovayaTehnika::getHeight() { return height_; }


// конструкторы
Holodilnik::Holodilnik()
{
}
Holodilnik::Holodilnik(std::string color, std::string energyclass) : color_(color), energyclass_(energyclass)
{
}
Holodilnik::Holodilnik(std::string brend, int weight, int height, std::string color, std::string energyclass) : KrupnayaBitovayaTehnika(brend,weight,height),color_(color),energyclass_(energyclass)
{
}

std::string Holodilnik::getColor() { return color_; }
void Holodilnik::setColor(std::string newcolor) { color_ = newcolor; }

std::string Holodilnik::getEnergyclass() { return energyclass_; }
void Holodilnik::setEnergyclass(std::string newenergyclass) { energyclass_ = newenergyclass; }

void Holodilnik::Show()
{
	std::cout << "Бренд: " << brend_ << "\n"
			  << "Высота: " << height_ << "\n"
			  << "Ширина: " << weight_ << "\n"
			  << "Цвет: " << color_ << "\n"
			  << "Класс энегопотребления: " << energyclass_ << std::endl;
}


// конструкторы
WashingMachine::WashingMachine()
{
}
WashingMachine::WashingMachine(int depth) : depth_(depth)
{
}
WashingMachine::WashingMachine(std::string brend, int weight, int height, int depth) : KrupnayaBitovayaTehnika(brend, weight, height),depth_(depth)
{
}

int WashingMachine::getDepth() { return depth_; }
void WashingMachine::setDepth(int newdepth) { depth_ = newdepth; }

void WashingMachine::Show()
{
	std::cout << "Бренд: " << brend_ << "\n"
		<< "Высота: " << height_ << "\n"
		<< "Ширина: " << weight_ << "\n"
		<< "Глубина: " << depth_ << std::endl;
}


// конструкторы
GasStove::GasStove()
{
}
GasStove::GasStove(std::string color, int burner) : color_(color), burner_(burner)
{
}
GasStove::GasStove(std::string brend, int weight, int height, std::string color, int burner) : KrupnayaBitovayaTehnika(brend,weight,height), color_(color), burner_(burner)
{
}

void GasStove::setBurner(int newburner){ burner_ = newburner; }
int GasStove::getBurner(){ return burner_; }

void GasStove::setColor(std::string newcolor) { color_ = newcolor; }
std::string GasStove::getColor(){ return color_; }

void GasStove::Show()
{
	std::cout << "Бренд: " << brend_ << "\n"
			  << "Высота: " << height_ << "\n"
			  << "Ширина: " << weight_ << "\n"
		      << "Цвет: " << color_ << "\n"		
			  << "Кол-во комфорок: " << burner_ << std::endl;
}




