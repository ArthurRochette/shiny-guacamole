#include "displayable.hpp"

unsigned int Displayable::ID_COUNTER = 0;

Displayable::Displayable()
{
    ID = Displayable::ID_COUNTER;
    Displayable::ID_COUNTER++;
}


void Displayable::setName(std::string name)
{
    this->name = name;
}

std::string Displayable::getName() const
{
    return this->name;
}

