#include "camera.hpp"

namespace SG
{

    Camera::Camera(float fov, float near, float far) : pos(0, 0, 0), direction(0, 0, -1), yaw(0), pitch(0), near(near), far(far)
    {
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
        projection = glm::perspective(glm::radians(fov), 1.0f, near, far);
        yaw = -90.f;
        pitch = 0.f;
    }

    glm::mat4 Camera::getMatrix() const
    {
        return projection * view;
    }

    Vec3f Camera::getPosition() const
    {
        return pos;
    }

    void Camera::setPosition(Vec3f pos)
    {
        this->pos = pos;
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
    }

    Vec3f Camera::getDirection() const
    {
        return direction;
    }

    void Camera::setDirection(Vec3f direction)
    {
        this->direction = direction;
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
    }

    void Camera::setDirection(float yaw, float pitch)
    {
        this->yaw = yaw;
        this->pitch = pitch;
        direction = Vec3f(cos(glm::radians(yaw)) * cos(glm::radians(pitch)), sin(glm::radians(pitch)), sin(glm::radians(yaw)) * cos(glm::radians(pitch)));
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
    }

    float Camera::getYaw() const
    {
        return yaw;
    }

    float Camera::getPitch() const
    {
        return pitch;
    }

    void Camera::setYaw(float yaw)
    {
        this->yaw = yaw;
        direction = Vec3f(cos(glm::radians(yaw)) * cos(glm::radians(pitch)), sin(glm::radians(pitch)), sin(glm::radians(yaw)) * cos(glm::radians(pitch)));
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
    }

    void Camera::setPitch(float pitch)
    {
        this->pitch = pitch;
        direction = Vec3f(cos(glm::radians(yaw)) * cos(glm::radians(pitch)), sin(glm::radians(pitch)), sin(glm::radians(yaw)) * cos(glm::radians(pitch)));
        view = glm::lookAt(pos, pos + direction, Vec3f(0, 1, 0));
    }

    void Camera::setNear(float near)
    {
        this->near = near;
        projection = glm::perspective(glm::radians(fov), 1.0f, near, far);
    }

    void Camera::setFar(float far)
    {
        this->far = far;
        projection = glm::perspective(glm::radians(fov), 1.0f, near, far);
    }

    float Camera::getNear() const
    {
        return near;
    }

    float Camera::getFar() const
    {
        return far;
    }

    void Camera::setResolution(int width, int height)
    {
        projection = glm::perspective(glm::radians(fov), (float)width / (float)height, near, far);
    }

    void Camera::setResolution(Vec2f resolution)
    {
        projection = glm::perspective(glm::radians(fov), resolution.x / resolution.y, near, far);
    }

    


}