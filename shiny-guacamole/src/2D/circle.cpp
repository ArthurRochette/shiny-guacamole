#include "2D/circle.hpp"

Circle::Circle(float x, float y, float z, float newRadius, unsigned int segments) : Shape()
{
	shapeName = "Circle";
	segments = segments;
	radius = newRadius;
	vertices = new float[ (1+segments) * 3]; // 3 each points
	for (int i = 0; i < segments; i++)		  // ok
	{
		float angle = 2 * M_PI * i / segments;
		float x = cos(angle) * radius;
		float y = sin(angle) * radius;
		vertices[i * 3] = x;
		vertices[i * 3 + 1] = y;
		vertices[i * 3 + 2] = 0;
	}
	vertices[segments * 3] = 0;
	vertices[segments * 3 + 1] = 0;
	vertices[segments * 3 + 2] = 0;
	setPosition(x,y,z);

	indices = new unsigned int[( segments) * 3];

	//create indices 0 4 1, 1 4 2, 2 4 3, 3 4 0
	for (int i = 0; i < segments; i++)
	{
		indices[i * 3] = i;
		indices[i * 3 + 1] = segments;
		indices[i * 3 + 2] = (i + 1) % segments;
	}

	verticesNumber = (1+segments) * 3; // +1 pour le point 0 0 0
	indicesNumber = segments * 3;
}

float Circle::getRadius() const
{
	return radius;
}

unsigned int Circle::getSegments() const
{
	return segments;
}
