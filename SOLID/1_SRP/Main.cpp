/*
The Single Responsibility Principle (S from SOLID)
The Single Responsibility Principle states that a class should do one thing and therefore
it should have only a single reason to change.

So, the X_Beer class have some troubles; it has 3 responsabilities and 3 reasons to change:
it Knows the information, it knows how to save the information (in a DB, for example),
and it knows how to send the information.
With a few changes we can refactor the class, separating its responsibilities.
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "X_Beer.h"
#include "Beer.h"
#include "BeerDB.h"
#include "BeerRequest.h"

int main() {
	X_Beer* beer1 = new X_Beer("Imperial", "Scottish");
	X_Beer* beer2 = new X_Beer("Corona", "Golden");

	beer1->Save();
	beer2->Send();

/*
Off course, this code works. But if you need to scale your application, this can be problematic.
Lets see how it works aplying the SRP.
*/
	BeerDB database;
	BeerRequest request;

	Beer* beer3 = new Beer("Heineken", "IPA");
	Beer* beer4 = new Beer("Quilmes", "Golden");

	database.Save(beer3);
	request.Send(beer4);

/*
It also work, but this time we can aply some changes in one of the three classes 
without problems.
*/
	_getch();
	return 0;
}