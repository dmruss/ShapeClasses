#ifndef SQUARE_HEAD
#define SQUARE_HEAD

#include "Rectangle.h"

//Class Description:  Square class inheriting attributes and methods from the rectangle class
class Square : public Rectangle {

	

public:
	//Constructors////////////////////////////
	Square();
	Square(int aSide);

	//Methods/////////////////////////////////
	void setSide(int anInt);

	


};

#endif