#pragma once
#include <stdio.h>
#include <iostream>
#include <string>

class Beer
{
public:
	std::string Name;
	std::string Brand;
	Beer(std::string name, std::string brand);
	~Beer();
};