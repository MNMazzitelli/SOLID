#include "X_Beer.h"

X_Beer::X_Beer(std::string name, std::string brand) {
	this->Name = name;
	this->Brand = brand;
}


X_Beer::~X_Beer() {

}

void X_Beer::Save() {
	std::cout << "Saving Beer " << Name << " / type " << Brand << ", in our DB." << std::endl;
}

void X_Beer::Send() {
	std::cout << "Sending Beer " << Name << " / type " << Brand << "." << std::endl;
}