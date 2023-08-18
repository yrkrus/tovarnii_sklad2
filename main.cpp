#include <iostream>
#include <cstring>
#include "KrupnayaBitovayaTehnika.h"
#include "MelkayaBitovayaTehnika.h"

using namespace std;

/*
	Задание 6.7.1 (HW-03)

ЗАДАНИЕ
Используйте разработанные вами классы, чтобы создать дочерние классы, 
описывающие конкретные виды бытовой техники или портативной электроники, 
у вас должен быть пример техники, которая наследуется от двух классов, 
как авокадо в примере с фруктами и овощами.

Создайте небольшой товарный склад (массив указателей на базовый класс электроники) 
и позвольте пользователю выбирать товар и просматривать его характеристики подобно тому, 
как мы сделали для овощной лавки.



	Электроника (int price_, string brend_)  Абстрактный класс
			Крупная бытовая техника (string brend_, int weight_, int height_)
				Холодильник (string color_, string energyclass_ )
				Стиральная машина (int depth_ )
				Газовая плита (string color_, int burner_)
			Мелкая бытовая техника (string brend_,string color_)
				Пылесос (int power_, double dustcontainervolume_)
				Микроволновая печь (int volume_, int power_)
				Чайник (int volume)

*/

void showInfo(char choise) {

	switch (choise)
	{
	case '0':
		{
		cout << "Товарный склад \n\n"
			<< "Выберите полку: \n"
			<< "1. Крупная бытовая техника \n"
			<< "2. Мелкая бытовая техника\n\n\n"
			<< "для выхода выбрать q";

		break;
		}


	default:
		break;
	}

}

int main()
{
	setlocale(LC_ALL, "");
	char choise{'0'};
	bool exitNow{ false };
	const int SIZE_electonica{ 1 };


	IElectronics *elecronica[SIZE_electonica];





	elecronica[0] = new Holodilnik("LG", 200, 350, "Зеленый", "A+");
	
	elecronica[0]->

	

	
	while (!exitNow) {
	
		showInfo(choise);
		cin >> choise;



	}
	

	delete elecronica[SIZE_electonica];
	return 0;

}