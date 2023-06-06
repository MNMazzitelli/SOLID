#include "BeerDB.h"

void BeerDB::Save(Beer* beer) {
	std::cout << "Saving Beer " << beer->Name << " / type " << beer->Brand << ", in our DB." << std::endl;
}