#ifndef MagicArray_HPP
#define MagicArray_HPP

#include "vectors3.hpp"

namespace SG{
template <typename T>
struct MagicArray
{
    MagicArray(){
        data = nullptr;
        size = 0;
    }
    MagicArray(T *data, size_t size)
        : data(data), size(size)
    {
    }
    T &getValue(int i) const { return data[i]; }
    size_t getSize() const { return size; }
    void setValue(int i, T value) { data[i] = value; }
    T *getData() const { return data; }
    void addValue(T value)
    {
        T *new_data = new T[size + 1];
        for (size_t i = 0; i < size; i++)
            new_data[i] = data[i];
        new_data[size] = value;
        delete[] data;
        data = new_data;
        size++;
    }
    void addValue(MagicArray &other)
    {
        T *new_data = new T[size + other.getSize()];
        for (size_t i = 0; i < size; i++)
            new_data[i] = data[i];
        for (size_t i = 0; i < other.getSize(); i++)
            new_data[i + size] = other.getValue(i);
        delete[] data;
        data = new_data;
        size += other.getSize();
    }

    T& operator[](int i) { return data[i]; }

    friend T& operator+(MagicArray<T> &a, const MagicArray<T> &b) 
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] + b[i];
        }
        return result;
    }

    friend T &operator-(MagicArray<T> &a, MagicArray<T> &b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] - b[i];
        }
        return result;
    }
    friend T &operator*(MagicArray<T> &a, MagicArray<T> &b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] * b[i];
        }
        return result;
    }
    friend T &operator/(MagicArray<T> &a, MagicArray<T> &b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] / b[i];
        }
        return result;
    }
    friend T &operator+(MagicArray<T> &a, T b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] + b;
        }
        return result;
    }
    friend T &operator-(MagicArray<T> &a, T b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] - b;
        }
        return result;
    }
    friend T &operator*(MagicArray<T> &a, T b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] * b;
        }
        return result;
    }
    friend T &operator/(MagicArray<T> &a, T b)
    {
        T *result = new T[a.getSize()];
        for (int i = 0; i < a.getSize(); i++)
        {
            result[i] = a[i] / b;
        }
        return result;
    }
    friend void operator+=(MagicArray<T> &a, MagicArray<T> &b)
    {
        for (int i = 0; i < a.getSize(); i++)
        {
            a[i] += b[i];
        }
    }
    friend void operator-=(MagicArray<T> &a, MagicArray<T> &b)
    {
        for (int i = 0; i < a.getSize(); i++)
        {
            a[i] -= b[i];
        }
    }
    friend void operator+=(MagicArray<T> *a, vec3f &b)
    {
        for (int i = 0; i < a->getSize(); i+=3)
        {
            a->data[i] += b.x;
            a->data[i+1] += b.y;
            a->data[i+2] += b.z;
        }
    }
    

    T *data;
    size_t size;
};

}

#endif // MagicArray_HPP