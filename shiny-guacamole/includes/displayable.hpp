#ifndef DISPLAYABLE_HPP
#define DISPLAYABLE_HPP

class Displayable 
{
    public:
    virtual void render() = 0;
    void setPosition(glm::vec3 pos);
    void setPosition(float x, float y, float z);
};

#endif // DISPLAYABLE_HPP