#include <iostream>

using namespace std;    

struct Points{
    int x;
    int y;
    int z;
};

//function to calculate the result
void calculateResult(int x, int y, int z){
    int result = 0;
    int d = 0;

    d = pow(y,2) - 4*x*z;

    if (d < 0){
        cout<< "There are no real roots" << endl;
    
    } else if (d == 0){
        cout << "There is one real root (x1 = x2)" << endl;
        result = -y / (2*x);
        cout << "The root is: " << result << endl;

    } else{
        cout << "There are two real roots" << endl;
        result = (-y + sqrt(d)) / (2*x);
        cout << "The first root is (x1): " << result << endl;
        result = (-y - sqrt(d)) / (2*x);
        cout << "The second root is (x2): " << result << endl;
    }
}

int main(){

    // enter the number of points
    Points Points;
    cin >> Points.x >> Points.y >> Points.z;
    
    calculateResult(Points.x, Points.y, Points.z);



}