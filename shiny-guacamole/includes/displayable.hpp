#ifndef DISPLAYABLE_HPP
#define DISPLAYABLE_HPP

#include <iostream>

/**
 * @brief Displayable class is must be inherited to create a displayable object.
 * @details render method as to be implemented by the inheriting class.
*/
class Displayable
{
public:
    Displayable();
    virtual void render() = 0;
    void setName(std::string name);
    std::string getName() const;// name of the entity
    std::string getDisplayableName() const ; // name of the class of the entity
    unsigned int getID() const;


protected:
    std::string displayableName;
    std::string name;

private:
    unsigned int ID;
    static unsigned int ID_COUNTER;
};

#endif // DISPLAYABLE_HPP