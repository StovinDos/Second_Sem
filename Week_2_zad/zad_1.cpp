#include <iostream>
#include <cmath>

using namespace std;

struct Points {
    int x;
    int y; 
    int z;
};

void findAll(Points p1, Points p2, Points p3) {
    int distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    int distance2 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
    int distance3 = sqrt(pow(p2.x - p3.x, 2) + pow(p2.y - p3.y, 2));

    int P = distance + distance2 + distance3;
    int p = P / 2;
    int S = sqrt(p * (p - distance) * (p - distance2) * (p - distance3));

    cout << "The perimeter of the triangle is: " << P << endl;
    cout << "The area of the triangle is: " << S << endl;
    
}

int main() {
     
    Points p1;
    Points p2;
    Points p3;

    cout << "Enter x, y, z for point 1: ";
    cin >> p1.x >> p1.y >> p1.z;
    cout << "Enter x, y, z for point 2: ";
    cin >> p2.x >> p2.y >> p2.z;
    cout << "Enter x, y, z for point 3: ";
    cin >> p3.x >> p3.y >> p3.z;

    findAll(p1, p2, p3);
    return 0;   
     
}