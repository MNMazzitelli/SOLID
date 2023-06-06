#include "BeerRequest.h"

void BeerRequest::Send(Beer* beer) {
	std::cout << "Sending Beer " << beer->Name << " / type " << beer->Brand << "." << std::endl;
}