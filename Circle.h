#ifndef CIRCLE_HEAD
#define CIRCLE_HEAD

#include <math.h>
#include "Shape.h"

//Class Description:  Class for a circle inherited from shape base class
class Circle : public Shape {

	//Variables///////////////////////////////////////
	int radius;

public:
	//Constructors/////////////////////////////////////
	Circle();
	Circle(int aRadius);

	//Setters/////////////////////////////////////////
	void setRadius(int anInt) { radius = anInt; }

	//Getters/////////////////////////////////////////
	int getRadius() const { return radius; }

	//Methods/////////////////////////////////////////
	double computeArea();
	double computeCircumference();
	void draw();
	void draw(int aRadius);

};

#endif