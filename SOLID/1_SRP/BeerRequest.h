#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Beer.h"

class BeerRequest
{
public:
	void Send(Beer* beer);
};