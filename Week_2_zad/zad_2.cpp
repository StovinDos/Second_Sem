#include <iostream>

struct Vector3D {
    double x, y, z;

    Vector3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    Vector3D operator*(const Vector3D& other) const {
        return Vector3D(x * other.x, y * other.y, z * other.z);
    }

    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }
};

int main() {
    Vector3D v1(1.0, 2.0, 3.0);
    Vector3D v2(4.0, 5.0, 6.0);

    std::cout << "Vector v1: ";
    v1.print();
    std::cout << "Vector v2: ";
    v2.print();

    Vector3D v3 = v1 + v2;
    std::cout << "v1 + v2: ";
    v3.print();

    Vector3D v4 = v1 * v2;
    std::cout << "v1 * v2: ";
    v4.print();

    Vector3D v5 = v1 * 2.5;
    std::cout << "v1 * 2.5: ";
    v5.print();

    return 0;
}