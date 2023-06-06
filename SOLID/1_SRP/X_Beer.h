#pragma once
#include <stdio.h>
#include <iostream>
#include <string>


class X_Beer
{
public:
	std::string Name;
	std::string Brand;
	X_Beer(std::string name, std::string brand);
	~X_Beer();

	void Save();

	void Send();
};