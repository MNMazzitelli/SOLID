#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Beer.h"

class BeerDB
{
public:
	void Save(Beer* beer);
};