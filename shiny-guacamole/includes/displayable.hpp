#ifndef DISPLAYABLE_HPP
#define DISPLAYABLE_HPP

class Displayable 
{
    public:
    Displayable();
    virtual void render() = 0;

    unsigned int ID;
    static unsigned int ID_COUNTER;
};

#endif // DISPLAYABLE_HPP