#ifndef DISPLAYABLE_HPP
#define DISPLAYABLE_HPP

#include <iostream>

class Displayable
{
public:
    Displayable();
    virtual void render() = 0;
    void setName(std::string name);
    std::string getName() const;

protected:
    std::string name;

private:
    unsigned int ID;
    static unsigned int ID_COUNTER;
};

#endif // DISPLAYABLE_HPP