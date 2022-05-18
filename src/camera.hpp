#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <glm/glm.hpp>

#include "vectors3.hpp"
namespace SG{
class Camera
{
protected:
    Vec3f pos;
    glm::mat4 view;
    glm::mat4 projection;
    Vec3f direction;
    float yaw;
    float pitch;
    float near;
    float far;

public: 


    Camera(float fov, float near, float far);

    glm::mat4 getMatrix() const;

    Vec3f getPosition() const;

    void setPosition(Vec3f pos);

    Vec3f getPosition() const;

    void setDirection(Vec3f direction);

    void setDirection(float yaw, float pitch);

    Vec3f getDirection() const;

    float getYaw() const;

    float getPitch() const;

    void setYaw(float yaw);

    void setPitch(float pitch);

    void setNear(float near);

    void setFar(float far);

    float getNear() const;

    float getFar() const;

    void setResolution(int width, int height);

    void setResolution(Vec2f resolution);


};

}

#endif // CAMERA_HPP