#include "displayable.hpp"

unsigned int Displayable::ID_COUNTER = 0;

Displayable::Displayable()
{
    displayableName = "Displayable";
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

std::string Displayable::getDisplayableName() const
{
    return displayableName;
}

unsigned int Displayable::getID() const {
    return ID;
}


//TODO pourquoi ne pas ajouter vbo and co car ca place est ici !