#pragma once

class IElectronics
{
public:
//	virtual void ShowPrice() = 0;
	virtual std::string ShowBrend() = 0;

	virtual ~IElectronics() = default;
};