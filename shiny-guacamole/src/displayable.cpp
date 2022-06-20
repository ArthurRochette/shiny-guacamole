#include "displayable.hpp"

unsigned int Displayable::ID_COUNTER = 0;

Displayable::Displayable()
{
    ID = Displayable::ID_COUNTER;
    Displayable::ID_COUNTER++;
}
